#include <string>

#pragma once

class Owner {
private:

    std::string name{};
    std::string address{};

    bool allowedToDrive{};
};