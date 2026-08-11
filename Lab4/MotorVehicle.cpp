#include <string>
#include <iostream>
#include "MotorVehicle.h"

MotorVehicle::MotorVehicle(float* tireDiameter, int numberOfTires, std::string model) {
	
	this->tireDiameter = *tireDiameter;
	this->numberOfTires = numberOfTires;
	this->model = model;

}

void MotorVehicle::print() {
	std::cout << tireDiameter;
}