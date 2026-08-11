#include "Engine.h"
#include "Body.h"
#include "Owner.h"

#pragma once


class MotorVehicle {
private:

    float tireDiameter{};

    int numberOfTires{};

    std::string model{};

public:

    MotorVehicle(float* tireDiameter, int numberOfTires, std::string model);

    void print();

};