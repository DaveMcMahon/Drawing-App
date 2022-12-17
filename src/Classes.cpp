#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Line.h"
#include "Triangle.h"

using namespace std;

int main() {

	Shape *myShape = nullptr;

	for (unsigned int i = 0; i < 15; i++) {

		int shapeType = 0 + (rand() % 3);
		int isFilled = 0 + (rand() % 2);
		int x1CoOrd = 1 + (rand() % 1000);
		int y1CoOrd = 1 + (rand() % 1000);
		int x2CoOrd = 1 + (rand() % 1000);
		int y2CoOrd = 1 + (rand() % 1000);

		if (shapeType == 0) {
			myShape = new Line(x1CoOrd, y1CoOrd, x2CoOrd, y2CoOrd);
		} else if (shapeType == 1) {
			myShape = new Square(x1CoOrd, y1CoOrd, x2CoOrd, y2CoOrd, isFilled);
		} else {
			myShape = new Triangle(x1CoOrd, y1CoOrd, x2CoOrd, y2CoOrd,
					isFilled);
		}

		myShape->draw();
	}

	myShape = nullptr;
	delete myShape;

	cout << "\nProgram finishing..." << endl;
	return 0;
}
