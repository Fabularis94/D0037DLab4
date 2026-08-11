#include "Body.h"
#include <string>
#include <iostream>


Body::Body(std::string colour, float width, float height) {

	this->colour = colour;
	this->width = width;
	this->height = height;
}

void Body::print() {

	std::cout << "The colour of the car is: " << colour << '\n';
	std::cout << "The width of the car is: " << width << '\n';
	std::cout << "The height of the car is: " << height << '\n';
}