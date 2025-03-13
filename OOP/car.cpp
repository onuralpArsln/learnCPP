#include <iostream>
#include <string>

// Base class
class Vehicle
{
protected:
    std::string brand;
    int speed;

public:
    Vehicle(std::string b, int s) : brand(b), speed(s) {}   // construtor

    void outsideFunc(); // bunu aşağıda tanımladık

    virtual void displayInfo()
    {
        std::cout << "Brand: " << brand << "\nSpeed: " << speed << " km/h\n";
    }

    virtual ~Vehicle() = default; //  destructor ama virtual yani ileride override edilebilir
    // javadaki gibi interface yok ama hepsi virtual olan sınıflarla bir interface benzeri oluşturmak mümkün
};

void Vehicle::outsideFunc(){
    std::cout << "Thi declared outside of body";

}

// miras
// class Car : public Vehicle, public BaşkaSınıf diye çoklu miras mümkün
class Car : public Vehicle
{
private:
    int doors;

public:
    // py super()., java super. gibi  yapmak için direkt  parent obje adını yazdık
    Car(std::string b, int s, int d) : Vehicle(b, s), doors(d) {}

    void displayInfo() override
    {
        Vehicle::displayInfo(); // parent class methodunu çağırmak 
        std::cout << "Doors: " << doors << "\n";
    }
};

// başka miras 
class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    ElectricCar(std::string b, int s, int d, int bc)
        : Car(b, s, d), batteryCapacity(bc) {}

    void displayInfo() override
    {
        Car::displayInfo(); // :: namespace resolution operatoru Car namespacesinden bir yapı edindik
        std::cout << "Battery Capacity: " << batteryCapacity << " kWh\n";
    }
};

int main()
{
    // Create instances of the classes
    Vehicle vehicle("Generic Vehicle", 80);
    Car car("Toyota", 120, 4);
    ElectricCar eCar("Tesla", 150, 4, 75);

    std::cout << "Vehicle Info:\n";
    vehicle.displayInfo();  
    std::cout << "\nCar Info:\n";
    car.displayInfo();
    std::cout << "\nElectric Car Info:\n";
    eCar.displayInfo();

    return 0;
}
