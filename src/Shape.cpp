#include "Shape.h"
#include <iostream>
#include <sstream>

Shape::Shape() {
	x1 = 0;
	y1 = 0;
	x2 = 0;
	y2 = 0;
}

Shape::Shape(int x1, int y1, int x2, int y2) {
	this->x1 = x1;
	this->y1 = y1;
	this->x2 = x2;
	this->y2 = y2;
}

Shape::~Shape() {
}

void Shape::setX1(int x1) {
	this->x1 = x1;
}
void Shape::setY1(int y1) {
	this->y1 = y1;
}
void Shape::setX2(int x2) {
	this->x2 = x2;
}
void Shape::setY2(int y2) {
	this->y2 = y2;
}

int Shape::getX1() {
	return x1;
}
int Shape::getY1() {
	return y1;
}
int Shape::getX2() {
	return x2;
}
int Shape::getY2() {
	return y2;
}

