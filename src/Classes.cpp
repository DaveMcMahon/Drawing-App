#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Line.h"

using namespace std;

int main() {

	Line line(10, 20, 300, 450);
	Square square(40, 50, 200, 670, true);

	line.draw();
	cout << endl;
	square.draw();

	cout << "\nProgram finishing..." << endl;
	return 0;
}
