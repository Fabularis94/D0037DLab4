#include "Engine.h"
#include "Body.h"
#include "Owner.h"

#pragma once


class Motorvehicle {
private:

    Engine engine{};
    Body body{};
    Owner owner{};

    float* tireDiameters{};

    int numberOfTires{};

    std::string model{};
};