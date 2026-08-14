#include <string>
#include <iostream>
#include "MotorVehicle.h"
#include "Engine.h"
#include "Body.h"
#include "Owner.h"
#include <random>


MotorVehicle::MotorVehicle(int numberOfTires, std::string model, Engine engine, 
	Body body, Owner owner)
	: engine(engine), body(body), owner(owner) {

	this->numberOfTires = numberOfTires;
	this->model = model;
	tireDiameter = new float[numberOfTires];

	float min = 15.0f;
	float max = 20.0f;

	// Initialize a random number generator
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_real_distribution<float> distrib(min, max);

	for (int i = 0; i < numberOfTires; i++) {
		tireDiameter[i] = distrib(gen);
	}

}

void MotorVehicle::print() {
	
	owner.print();

	body.print();

	engine.print();

	std::cout << "The car has " << numberOfTires << " wheels\n";

	for (int i = 0; i < numberOfTires; i++) {
		std::cout << "Tire diamterer for wheel " << i + 1 << " is: " << tireDiameter[i] << '\n';
	}

}

MotorVehicle::~MotorVehicle(){
	
	delete[] tireDiameter;
}