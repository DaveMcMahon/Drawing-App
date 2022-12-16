#include <iostream>
#include "Shape.h"
#include "Line.h"

using namespace std;

int main() {

	Line line(10, 20, 300, 450, false);

	line.draw();

	cout << "Program finishing..." << endl;
	return 0;
}
