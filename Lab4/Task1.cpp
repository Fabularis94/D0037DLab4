#include <iostream>
#include <string>
#include "Engine.h"
#include "Owner.h"
#include "Body.h"
#include "MotorVehicle.h"

#pragma once

int main()
{
	int litres{};
	int cylinders{};
	int numberOfTires{};

	float width{};
	float height{};
	//float tireDiameter{};

	std::string name{};
	std::string address{};
	std::string colour{};
	std::string model{};

	char driverAnswer{};

	bool allowedToDrive{};


	std::cout << "Welcome to build your vehicle! \n";

	std::cout << "Input your name: ";
	std::cin >> name;

	std::cout << "Input your address: ";
	std::cin >> address;

	do {

		std::cout << "Are you allowed to drive (y/n): ";

		std::cin >> driverAnswer;

		driverAnswer = std::tolower(driverAnswer);

		if (driverAnswer == 'y') {
			allowedToDrive = true;
			break;
		}
		else if (driverAnswer == 'n') {
			allowedToDrive = false;
			break;
		}
		else {
			continue;
		}
	} while (true);

	Owner owner(name, address, allowedToDrive);

	std::cout << "Choose the colour of the vehicle: ";
	std::cin >> colour;

	std::cout << "Choose the width of the vehicle: ";
	std::cin >> width;

	std::cout << "Choose the height of the vehicle: ";
	std::cin >> height;

	Body body(colour, width, height);

	std::cout << "Choose the engine size in litres: ";
	std::cin >> litres;

	std::cout << "Now choose the amount of cylinders: ";
	std::cin >> cylinders;

	Engine engine(litres, cylinders);

	std::cout << "Choose the model of the vehicle: ";
	std::cin >> model;

	do {
		std::cout << "Choose the amount of tires (2/4): ";
		std::cin >> numberOfTires;

	} while (numberOfTires != 2 && numberOfTires != 4);


	MotorVehicle motorvehicle(numberOfTires, model, engine, body, owner);

	motorvehicle.print();

}

