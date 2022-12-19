#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Line.h"
#include "Triangle.h"
#include <SDL.h>
#include "Screen.h"

using namespace std;

int main() {

	Screen window;

	if (!window.init()) {
		cout << "Error initialising Window" << endl;
		return 1;
	}

	while (true) {

		if (!window.processEvents()) {
			break;
		}
	}

	window.closeWindow();

	cout << "\nProgram finishing..." << endl;
	return 0;
}
