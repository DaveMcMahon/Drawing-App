#ifndef SQUARE_H_
#define SQUARE_H_

#include <iostream>
#include <sstream>
#include "BoundedShape.h"

class Square: public BoundedShape {
public:
	Square();
	Square(int x1, int y1, int x2, int y2, bool isFilled);
	virtual ~Square() {
	}

public:
	void draw() override;
};

#endif
