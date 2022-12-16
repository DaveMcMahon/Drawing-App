#include "BoundedShape.h"

BoundedShape::BoundedShape() :
		Shape() {
	this->isFilled = false;
}

BoundedShape::BoundedShape(int x1, int y1, int x2, int y2, bool isFilled) :
		Shape(x1, y1, x2, y2) {
	this->isFilled = isFilled;
}

void BoundedShape::setFilled(bool isFilled) {
	this->isFilled = isFilled;
}

double BoundedShape::getWidth() {
	return std::abs(getX2() - getX1());
}
double BoundedShape::getHeight() {
	return std::abs(getY2() - getY1());
}

double BoundedShape::getUpperLeftX() {
	return std::min(getX1(), getX2());
}
double BoundedShape::getUpperLeftY() {
	return std::min(getY1(), getY2());
}

bool BoundedShape::getFilled() {
	return this->isFilled;
}
