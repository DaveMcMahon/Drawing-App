#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
#include <sstream>
#include "Shape.h"

class Square: Shape {
private:
	double width;
	double height;
	bool isFilled;

public:
	Square();
	Square(int x1, int y1, int x2, int y2, double width, double height,
			bool isFilled);

public:
	void setWidth(double width);
	void setHeight(double height);
	void setFilled(bool isFilled);

public:
	double getWidth();
	double getHeight();
	bool getFilled();

public:
	void draw() override;
};

#endif
