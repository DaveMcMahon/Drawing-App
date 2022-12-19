#include "Screen.h"

Screen::Screen() {
	this->mWindow = nullptr;
	this->mTexture = nullptr;
	this->mRenderer = nullptr;
}

bool Screen::init() {

	if (SDL_Init(SDL_INIT_VIDEO) < 0) {
		return false;
	}

	SDL_Window *mWindow = SDL_CreateWindow("Drawing Application",
	SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WINDOW_WIDTH,
			WINDOW_HEIGHT, SDL_WINDOW_SHOWN);

	if (mWindow == NULL) {
		return false;
	}

	SDL_Renderer *mRenderer = SDL_CreateRenderer(mWindow, -1,
			SDL_RENDERER_PRESENTVSYNC);

	if (mRenderer == NULL) {
		SDL_DestroyWindow(mWindow);
		SDL_Quit();
		return false;
	}

	SDL_Texture *m_texture = SDL_CreateTexture(mRenderer,
			SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, WINDOW_WIDTH,
			WINDOW_HEIGHT);

	if (m_texture == NULL) {
		SDL_DestroyRenderer(mRenderer);
		SDL_DestroyWindow(mWindow);
		SDL_Quit();
		return false;
	}

	return true;
}

bool Screen::processEvents() {
	SDL_Event event;

	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_QUIT) {
			return false;
		}
	}

	return true;
}

void Screen::closeWindow() {

	SDL_DestroyTexture(mTexture);
	SDL_DestroyRenderer(mRenderer);
	SDL_DestroyWindow(mWindow);
	SDL_Quit();
}
