#include "Square.h"

Square::Square() :
		Shape() {
	this->width = 0.0;
	this->height = 0.0;
	this->isFilled = false;
}

Square::Square(int x1, int y1, int x2, int y2, double width, double height,
		bool isFilled) :
		Shape(x1, y1, x2, y2) {
	this->width = width;
	this->height = height;
	this->isFilled = isFilled;
}

void Square::setWidth(double width) {
	this->width = width;
}
void Square::setHeight(double height) {
	this->height = height;
}
void Square::setFilled(bool isFilled) {
	this->isFilled = isFilled;
}

double Square::getWidth() {
	return this->width;
}
double Square::getHeight() {
	return this->height;
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
	ss << "\nWidth: " << getWidth() << ", Height: " << getHeight() << ", "
			<< "Filled: " << std::boolalpha << getFilled();

	std::cout << ss.str() << std::endl;
}
