#include "Line.h"

Line::Line() :
		Shape() {
}

Line::Line(int x1, int y1, int x2, int y2, bool isFilled) :
		Shape(x1, y1, x2, y2, isFilled) {
}

void Line::draw() {

	// 	SDL Code will go here to actually draw
	//	a graphical shape on screen and render it.
	// 	For now, console logging will suffice until logic is correct.

	std::stringstream ss;
	ss << "Drawing a Line..";
	ss << "\n";
	ss << "X1: " << getX1() << ", Y1: " << getY1() << ", X2: " << getX2()
			<< ", Y2: " << getY2() << ", Filled: " << std::boolalpha
			<< getFilled();

	std::cout << ss.str() << std::endl;
}

Line::~Line() {

}