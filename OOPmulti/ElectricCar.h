#ifndef ELECTRIC_CAR_H
#define ELECTRIC_CAR_H

#include "Car.h"

class ElectricCar : public Car
{
private:
    int batteryCapacity;

public:
    ElectricCar(std::string b, int s, int d, int bc);
    void displayInfo() override;
};

#endif
