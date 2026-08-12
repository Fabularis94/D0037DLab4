#include "Owner.h"
#include <iostream>

Owner::Owner(std::string name, std::string address, bool allowedToDrive) {

	this->name = name;
	this->address = address;
	this->allowedToDrive = allowedToDrive;
}

void Owner::print() {
	std::cout << "Your name is: " << name << '\n';
	std::cout << "Your address is: " << address << '\n';
	if (allowedToDrive)
		std::cout << "You are allowed to drive\n";
	else
		std::cout << "You are not allowed to drive\n";
}