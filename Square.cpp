#include <iostream>
#include "Square.h"

Square::Square(const char *n, double a): Rectangle(n, a, a){}

Square::~Square(){}

double Square::calcArea() const{
    std::cout << "calcArea of Square..." << std::endl;
    return Rectangle::calcArea();
}

double Square::calcPerimiter() const{
    std::cout << "calcPerimeter of Square... " << std::endl;
    return Rectangle::calcPerimiter();
}