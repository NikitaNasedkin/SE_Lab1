#include "Circle.h"

Circle::Circle(double theRadius) {
	if (theRadius <= 0) {
		throw("Wrong radius!");
	}
	radius = theRadius;
}

double Circle::getArea() {
	return PI * radius * radius;
}
