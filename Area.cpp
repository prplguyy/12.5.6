#include <iostream>
#include <cstring>
#include "Area.h"
using namespace std;

Area::Area(const char* n) {
	strncpy(color, n, 10);
	cout << "Area constructor being called...\n";
}

Area::~Area() {
}

void Area::getColor() const {
	cout << "\n" << color << ": ";
}

double Area::calcArea() const {
	std::cout << "calcArea ...";
	return 0;
}

double Area::calcPerimeter() const {
	std::cout << "calcPerimeter ...";
	return 0;
}
