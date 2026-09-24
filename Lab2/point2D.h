#pragma once

class Point2D {
private:

	float x{};
	float y{};

public:

	Point2D(float x, float y);

	Point2D(const Point2D& other) {

	}
	
	~Point2D();

};

