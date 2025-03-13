#include "Vehicle.h"
#include "Car.h"
#include "ElectricCar.h"

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

/*
g++ main.cpp Vehicle.cpp Car.cpp ElectricCar.cpp -o prog
g++ *.cpp -o prog
./prog
*/