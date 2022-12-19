#ifndef SCREEN_H_
#define SCREEN_H_
#include <SDL.h>

class Screen {
private:
	SDL_Window *mWindow;
	SDL_Renderer *mRenderer;
	SDL_Texture *mTexture;

public:
	const int WINDOW_WIDTH = 800;
	const int WINDOW_HEIGHT = 600;

public:
	Screen();

public:
	bool init();
	bool processEvents();
	void closeWindow();
};

#endif /* SCREEN_H_ */
