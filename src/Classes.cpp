#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Line.h"
#include "Triangle.h"

using namespace std;

int main() {

	Square square(40, 50, 200, 670, false);
	Shape *sq = new Square(50, 100, 340, 65, true);
	Shape *triangle = new Triangle(98, 34, 150, 200, true);

	square.draw();
	cout << endl;
	sq->draw();
	cout << endl;
	triangle->draw();

	delete sq;
	delete triangle;

	cout << "\nProgram finishing..." << endl;
	return 0;
}
