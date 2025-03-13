#include "ElectricCar.h"

ElectricCar::ElectricCar(std::string b, int s, int d, int bc)
    : Car(b, s, d), batteryCapacity(bc) {}

void ElectricCar::displayInfo() {
    Car::displayInfo();
    std::cout << "Battery Capacity: " << batteryCapacity << " kWh\n";
}
