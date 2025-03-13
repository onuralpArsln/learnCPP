#include "Car.h"

Car::Car(std::string b, int s, int d) : Vehicle(b, s), doors(d) {}

void Car::displayInfo() {
    Vehicle::displayInfo();
    std::cout << "Doors: " << doors << "\n";
}
