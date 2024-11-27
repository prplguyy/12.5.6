#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char *n, double a) : Area(n) {
	radius = a;
}

Circle::~Circle() {
}

double Circle::calcArea() const {
	std::cout << "calcArea of Circle...";
	return 3.14*radius*radius;
}

double Circle::calcPerimiter() const{
	std::cout << "calcPerimiter of Circle...";
	return 2*radius*3.14;
}
