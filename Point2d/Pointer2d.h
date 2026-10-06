#pragma once

class Point2d {
private:

	float x{};
	float y{};

public:

	Point2d(float x, float y);

	Point2d(const Point2d& other) {

	}

	~Point2d();

};

