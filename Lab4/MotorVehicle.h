#include "Engine.h"
#include "Body.h"
#include "Owner.h"

#pragma once


class MotorVehicle {
private:

    float* tireDiameter{};

    int numberOfTires{};

    std::string model{};

    Engine engine;
    Owner owner;
    Body body;

public:

    MotorVehicle(float* tempArray, int numberOfTires, std::string model, Engine engine, Body body, Owner owner);


    void print();

};