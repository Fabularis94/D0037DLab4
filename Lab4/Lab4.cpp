#include <iostream>
#include <string>


class Motorvehicle {
private:

    Engine engine{};
    Body body{};
    Owner owner{};

    float* tireDiameters{};

    int numberOfTires{};

    std::string model{};
};

class Engine {
private:

    float sizeInLitres{};
    
    int numberOfCylinders{};
};

class Body {
private:

    std::string colour{};
    
    float width{};
    float height{};
};

class Owner {
private:

    std::string name{};
    std::string address{};

    bool allowedToDrive{};
};
    

   
int main()
{
    std::cout << "Hello World!\n";
}

