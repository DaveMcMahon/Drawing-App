#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Line.h"
#include "Triangle.h"
#include <SDL.h>

using namespace std;

int main() {

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL Init failed" << endl;
		return 1;
	}

	cout << "SDL succeeded" << endl;

	SDL_Window *window = SDL_CreateWindow("Drawing Application",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	if (window == NULL) {
		SDL_Quit();
		return 2;
	}

	bool quit = false;
	SDL_Event event;

	while (!quit) {

		while (SDL_PollEvent(&event)) {
			if(event.type == SDL_QUIT){
				quit = true;
			}
		}

	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	Shape *myShape = nullptr;

	for (unsigned int i = 0; i < 15; i++) {

		int shapeType = 0 + (rand() % 3);
		int isFilled = 0 + (rand() % 2);
		int x1CoOrd = 1 + (rand() % 1000);
		int y1CoOrd = 1 + (rand() % 1000);
		int x2CoOrd = 1 + (rand() % 1000);
		int y2CoOrd = 1 + (rand() % 1000);

		if (shapeType == 0) {
			myShape = new Line(x1CoOrd, y1CoOrd, x2CoOrd, y2CoOrd);
		} else if (shapeType == 1) {
			myShape = new Square(x1CoOrd, y1CoOrd, x2CoOrd, y2CoOrd, isFilled);
		} else {
			myShape = new Triangle(x1CoOrd, y1CoOrd, x2CoOrd, y2CoOrd,
					isFilled);
		}

		myShape->draw();
	}

	myShape = nullptr;
	delete myShape;

	cout << "\nProgram finishing..." << endl;
	return 0;
}
