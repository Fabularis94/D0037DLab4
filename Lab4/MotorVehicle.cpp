#include <string>
#include <iostream>
#include "MotorVehicle.h"
#include "Engine.h"
#include "Body.h"
#include "Owner.h"


MotorVehicle::MotorVehicle(int numberOfTires, std::string model, Engine engine, 
	Body body, Owner owner)
	: engine(engine), body(body), owner(owner) {

	this->numberOfTires = numberOfTires;
	this->model = model;


	std::vector<float> tireDiameter(numberOfTires);

	for (int i = 0; i < numberOfTires; i++) {
		std::cout << "Choose diameter for tire " << i + 1 << " : ";
		std::cin >> tireDiameter[i];
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
