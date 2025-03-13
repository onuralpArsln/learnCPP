
#include "Vehicle.h"

Vehicle::Vehicle(std::string b, int s) : brand(b), speed(s) {}

void Vehicle::outsideFunc() {
    std::cout << "This is declared outside of body\n";
}

void Vehicle::displayInfo() {
    std::cout << "Brand: " << brand << "\nSpeed: " << speed << " km/h\n";
}

Vehicle::~Vehicle() = default;
