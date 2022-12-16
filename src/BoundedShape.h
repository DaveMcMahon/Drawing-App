#ifndef BOUNDEDSHAPE_H_
#define BOUNDEDSHAPE_H_

#include "Shape.h"
#include <iostream>
#include <sstream>

class BoundedShape: public Shape {
private:
	bool isFilled;

public:
	BoundedShape();
	BoundedShape(int x1, int y1, int x2, int y2, bool isFilled);
	virtual ~BoundedShape() {
	}

public:
	void setFilled(bool isFilled);

public:
	double getWidth();
	double getHeight();
	double getUpperLeftX();
	double getUpperLeftY();
	bool getFilled();

public:
	virtual void draw() = 0;
};

#endif
