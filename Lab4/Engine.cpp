#include "Engine.h"
#include <iostream>


Engine::Engine(float sizeInLitres, int numberOfCylinders) {
	/*sizeInLitres = litres;
	numberOfCylinders = cylinders;*/
	//learnt how to use this
	this->sizeInLitres = sizeInLitres;
	this->numberOfCylinders = numberOfCylinders ;

}

void Engine::print() {
	std::cout << "Size of the engine: " << sizeInLitres << "L\n";
	std::cout << "Amount of cylinders: " << numberOfCylinders << '\n';
}