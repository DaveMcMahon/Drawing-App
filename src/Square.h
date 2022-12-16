#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
#include <sstream>
#include "Shape.h"

class Square: Shape {
private:
	bool isFilled;

public:
	Square();
	Square(int x1, int y1, int x2, int y2, bool isFilled);

public:
	void setFilled(bool isFilled);

public:
	double getWidth();
	double getHeight();
	double getUpperLeftX();
	double getUpperLeftY();
	bool getFilled();

public:
	void draw() override;
};

#endif
