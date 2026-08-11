#include <string>

#pragma once

class Body {
private:

    std::string colour{};

    float width{};
    float height{};

public:

    Body(std::string colour, float width, float height);

    void print();
};