#include <string>

#pragma once

class Owner {
private:

    std::string name{};
    std::string address{};

    bool allowedToDrive{};

public:

    Owner(std::string name, std::string address, bool allowedToDrive);

    void print();
};