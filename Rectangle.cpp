#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char *n, double a, double b) : Area(n) {
    length = a;
    width = b;
}

Rectangle::~Rectangle() {
}

double Rectangle::calcArea() const {
	std::cout << "calcArea of Rectangle...";
	return width*length;
}

double Rectangle::calcPerimiter() const {
	std::cout << "calcPerimiter of Rectangle...";
    return 2*(length+width);
}
