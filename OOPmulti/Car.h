#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle
{
private:
    int doors;

public:
    Car(std::string b, int s, int d);
    void displayInfo() override;
};

#endif