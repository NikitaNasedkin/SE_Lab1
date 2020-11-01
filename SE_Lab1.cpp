#include <iostream>
#include "Circle.h"
#include "Ellipse.h"
#include <vector>
#include <time.h>

int main()
{
    bool currentFigure = 0;
    std::vector<Figure*> figureVector;
    int countOfFigures = 10;
    double areaSum = 0;
    srand(time(NULL));

    //Vector generating
    for (int i = 0; i < countOfFigures; i++) {
        currentFigure = rand() % 2;
        if (currentFigure == 0) {
            figureVector.push_back(new Circle(1 + rand() % 10));
        }
        else {
            figureVector.push_back(new Ellipse(1 + rand() % 10, 1 + rand() % 10));
        }
    }

    //Sort
    for (int i = 0; i < figureVector.size() - 1; i++) {
        for (int j = i + 1; j < figureVector.size(); j++) {
            if (figureVector[i]->getArea() > figureVector[j]->getArea()) {
                Figure* tmp = figureVector[i];
                figureVector[i] = figureVector[j];
                figureVector[j] = tmp;
            }
        }
    }

    //Data displaying
    std::cout << "Areas of figures from vector: ";
    for (int i = 0; i < figureVector.size(); i++)
    {
        areaSum += figureVector[i]->getArea();
        std::cout << figureVector[i]->getArea() << " ";
    }
    std::cout << std::endl << "Area sum of figures from vector: " << areaSum << std::endl;
}
