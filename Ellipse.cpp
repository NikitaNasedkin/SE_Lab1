#include "Ellipse.h"

Ellipse::Ellipse(double theBigRaduis, double theSmallRadius) {
    if (theBigRaduis < 0 || theSmallRadius < 0) {
        throw("Wrong values!");
    }
    bigRadius = theBigRaduis;
    smallRadius = theSmallRadius;
}

double Ellipse::getArea() {
    return PI * bigRadius * smallRadius;
}
