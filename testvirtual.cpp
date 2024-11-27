#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

 
const int num_obj = 7;
int main() {
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	Square purple_square("PURPLE", 4);

    double total_perimeter = 0;
    total_perimeter += blue_ring.calcPerimeter();
    total_perimeter += yellow_circle.calcPerimeter();
    total_perimeter += green_rectangle.calcPerimeter();
    total_perimeter += red_circle.calcPerimeter();
    total_perimeter += black_rectangle.calcPerimeter();
    total_perimeter += violet_ring.calcPerimeter();
    total_perimeter += purple_square.calcPerimeter();

    cout << "Total perimeter of all objects: " << total_perimeter << endl;


	return 0;
}
