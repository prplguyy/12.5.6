#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char *n, double outer, double inner) 
					: Circle(n, outer) {
	innerradius = inner;
}

Ring::~Ring() {
}

double Ring::calcArea() const {
	std::cout << "calcArea of Ring...";
	return 3.14 * (outerradius * outerradius - innerradius * innerradius);
}

double Ring::calcPerimiter() const {
	std::cout << "calcPerimiter of Ring...";
	return 2 * 3.14 * outerradius + 2 * 3.14 * innerradius;
}
