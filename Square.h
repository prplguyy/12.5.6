#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square: public Rectangle{
    public:
        Square(const char*n, double a);
        ~Square();
        double calcArea() const override;
        double calcPerimiter() const override;

};

#endif
