#include <iostream>
#include "Shape.h"
#include "Square.h"
#include "Line.h"
#include "Triangle.h"
#include <SDL.h>

using namespace std;

int main() {

	Shape *myShape = nullptr;

	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		cout << "SDL Init failed" << endl;
		return 1;
	}

	cout << "SDL succeeded" << endl;

	SDL_Window *m_window = SDL_CreateWindow("Drawing Application",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
			SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

	SDL_Renderer *m_renderer = SDL_CreateRenderer(m_window, -1,
			SDL_RENDERER_PRESENTVSYNC);

	SDL_Texture *m_texture = SDL_CreateTexture(m_renderer,
			SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, SCREEN_WIDTH,
			SCREEN_HEIGHT);

	SDL_SetRenderDrawColor(m_renderer, 255, 255, 255, 255);
	SDL_RenderClear(m_renderer);

	if (m_window == NULL) {
		SDL_Quit();
		return 2;
	}

	for (unsigned int i = 0; i < 15; i++) {

		int shapeType = 0 + (rand() % 3);
		int isFilled = 0 + (rand() % 2);
		int x1CoOrd = 1 + (rand() % SCREEN_WIDTH);
		int y1CoOrd = 1 + (rand() % SCREEN_HEIGHT);
		int x2CoOrd = 1 + (rand() % SCREEN_WIDTH);
		int y2CoOrd = 1 + (rand() % SCREEN_HEIGHT);

		SDL_RenderDrawLine(m_renderer, x1CoOrd, y1CoOrd, x2CoOrd, y2CoOrd);
		SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
		SDL_RenderPresent(m_renderer);

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

	bool quit = false;
	SDL_Event event;

	while (!quit) {

		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				quit = true;
			}
		}

	}

	SDL_DestroyTexture(m_texture);
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
	SDL_Quit();

	cout << "\nProgram finishing..." << endl;
	return 0;
}
