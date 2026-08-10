#include "Engine.h"
#include <iostream>


Engine::Engine(float litres, int cylinders) {
	sizeInLitres = litres;
	numberOfCylinders = cylinders;
}

void Engine::print() {
	std::cout << "Size of the engine: " << sizeInLitres << "L\n";
	std::cout << "Amount of cylinders: " << numberOfCylinders << '\n';
}