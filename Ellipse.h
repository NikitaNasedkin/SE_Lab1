#pragma once
#include "Figure.h"

class Ellipse : public Figure {
private:
    double bigRadius;
    double smallRadius;

public:
    Ellipse(double theBigRadus, double theSmallRadius);
    double getArea() override;
};
