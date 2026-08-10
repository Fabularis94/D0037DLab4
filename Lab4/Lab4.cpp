#include <iostream>
#include <string>
#include "Engine.h"
#include "Owner.h"
#include "Body.h"

#pragma once
   
int main()
{
	int litres{};
	int cylinders{};

	std::string name{};
	std::string address{};
	
	char driverAnswer{};

	bool allowedToDrive{};

	std::cout << "Welcome to build your vehicle! \n";

	/*std::cout << "To start off, choose the engine size in litres: ";
	std::cin >> litres;

	std::cout << "Now choose the amount of cylinders: ";
	std::cin >> cylinders;

	Engine engine(litres, cylinders);
	engine.print();*/

	std::cout << "Input your name: ";
	std::cin >> name;

	std::cout << "Input your address: ";
	std::cin >> address;

	do {

		std::cout << "Are you allowed to drive (y/n): ";

		std::cin >> driverAnswer;

		driverAnswer = std::tolower(driverAnswer);

		if (driverAnswer == 'y') {
			allowedToDrive;
			break;
		}
		else if (driverAnswer == 'n') {
			!allowedToDrive;
			break;
		}
		else {
			continue;
		}
	} while (true);

	Owner owner(name, address, allowedToDrive);

	owner.print();
	

}

