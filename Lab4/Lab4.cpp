#include <iostream>
#include <string>
#include "Engine.h"

#pragma once
   
int main()
{
	int litres{};
	int cylinders{};

	std::cout << "Welcome to build your vehicle! \n";

	std::cout << "To start off, choose the engine size in litres: ";
	std::cin >> litres;

	std::cout << "Now choose the amount of cylinders: ";
	std::cin >> cylinders;

	Engine engine(litres, cylinders);
	engine.print();

}

