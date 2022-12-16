#include "Square.h"

Square::Square() :
		Shape() {
	this->isFilled = false;
}

Square::Square(int x1, int y1, int x2, int y2, bool isFilled) :
		Shape(x1, y1, x2, y2) {
	this->isFilled = isFilled;
}

void Square::setFilled(bool isFilled) {
	this->isFilled = isFilled;
}

double Square::getWidth() {
	return std::abs(getX2() - getX1());
}
double Square::getHeight() {
	return std::abs(getY2() - getY1());
}

double Square::getUpperLeftX() {
	return std::min(getX1(), getX2());
}
double Square::getUpperLeftY() {
	return std::min(getY1(), getY2());
}

bool Square::getFilled() {
	return this->isFilled;
}

void Square::draw() {
	// 	SDL Code will go here to actually draw
	//	a graphical shape on screen and render it.
	// 	For now, console logging will suffice until logic is correct.

	std::stringstream ss;
	ss << "Drawing a Square..";
	ss << "\n";
	ss << "X1: " << getX1() << ", Y1: " << getY1() << ", X2: " << getX2()
			<< ", Y2: " << getY2();
	ss << "\nWidth: " << getWidth() << ", Height: " << getHeight();
	ss << "\nUpper Left X: " << getUpperLeftX() << ", Upper Left Y: "
			<< getUpperLeftY();
	ss << ", Filled: " << std::boolalpha << getFilled();

	std::cout << ss.str() << std::endl;
}
