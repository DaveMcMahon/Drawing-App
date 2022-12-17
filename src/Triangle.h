#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "BoundedShape.h"
#include <iostream>
#include <sstream>

class Triangle: public BoundedShape {
public:
	Triangle();
	Triangle(int x1, int y1, int x2, int y2, bool isFilled);
	virtual ~Triangle() {
	}

public:
	void draw() override;
};

#endif
