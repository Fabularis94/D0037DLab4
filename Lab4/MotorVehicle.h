#include "Engine.h"
#include "Body.h"
#include "Owner.h"
#include <vector>

#pragma once


class MotorVehicle {
private:


    int numberOfTires{};

    std::vector<float> tireDiameter;

    std::string model{};

    Engine engine;
    Owner owner;
    Body body;

public:

    MotorVehicle(int numberOfTires, std::string model, Engine engine, Body body, Owner owner);
    

    void print();

};