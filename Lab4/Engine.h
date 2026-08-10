#pragma once


class Engine {
private:

    float sizeInLitres{};

    int numberOfCylinders{};

public:

    Engine(float sizeInLitres, int numberOfCylinders);

    void print();

};