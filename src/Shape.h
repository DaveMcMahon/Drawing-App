#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {

// Member Variables
private:
	int x1;
	int y1;
	int x2;
	int y2;
	bool isFilled;

public:
	Shape();
	Shape(int x1, int y1, int x2, int y2, bool isFilled);
	virtual ~Shape();

// Setters
public:
	void setX1(int x1);
	void setY1(int y1);
	void setX2(int x2);
	void setY2(int y2);
	void setFilled(bool isFilled);

// Getters
public:
	int getX1();
	int getY1();
	int getX2();
	int getY2();
	bool getFilled();

// Methods
public:
	virtual void draw() = 0;
};

#endif
