#ifndef LINE_H_
#define LINE_H_

#include "Shape.h"
#include <iostream>
#include <sstream>

class Line: public Shape {
public:
	Line();
	Line(int x1, int y1, int x2, int y2);
	virtual ~Line();

public:
	void draw() override;
};

#endif
