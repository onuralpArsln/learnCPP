#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

class Vehicle
{
protected:
    std::string brand;
    int speed;

public:
    Vehicle(std::string b, int s);
    virtual void displayInfo();
    void outsideFunc();
    virtual ~Vehicle();
};

#endif
