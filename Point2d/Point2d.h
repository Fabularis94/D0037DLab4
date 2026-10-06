#pragma once
#include <math.h>
#include <string>
#include <iostream>

class Point2d {
private:

	float x{};
	float y{};
	float a{};
	float b{};

public:

	Point2d(float x, float y); //constructor
	Point2d(); //default constructor

	Point2d(const Point2d& other) { //copy constructor
		x = other.x;
		y = other.y;
	}


	float calcDist(const Point2d& other) {
		float dx = other.y - x;
		float dy = other.x - y;

		float dist = sqrt(dx * dx + dy * dy);

		return dist;
	}

	std::string toString() {
		std::string xValue;
		std::string yValue;

		xValue = std::to_string(x);
		yValue = std::to_string(y);

		return "[" + xValue + ", " + yValue + "]";
	}

	Point2d operator+(const Point2d& other) {
		return Point2d(x + other.x, y + other.y);
	}
	bool operator==(const Point2d& other) {
		return x == other.x && y == other.y;
	}
	Point2d& operator=(const Point2d& other) {
		x = other.x;
		y = other.y;

		return *this;
	}


	~Point2d();

};

