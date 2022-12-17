#include "Triangle.h"

Triangle::Triangle() :
		BoundedShape() {
}

Triangle::Triangle(int x1, int y1, int x2, int y2, bool isFilled) :
		BoundedShape(x1, y1, x2, y2, isFilled) {
}


void Triangle::draw() {
	// 	SDL Code will go here to actually draw
	//	a graphical shape on screen and render it.
	// 	For now, console logging will suffice until logic is correct.

	std::stringstream ss;

	if (getFilled()) {
		ss << "Drawing a coloured in Triangle..";
	} else {
		ss << "Drawing an empty Triangle..";
	}

	ss << "\n";
	ss << "X1: " << getX1() << ", Y1: " << getY1();
	ss << "\nX2: " << getX2() << ", Y2: " << getY2();
	ss << "\nWidth: " << getWidth() << ", Height: " << getHeight();
	ss << "\nUpper Left X: " << getUpperLeftX() << ", Upper Left Y: "
			<< getUpperLeftY();

	std::cout << ss.str() << std::endl;
}
