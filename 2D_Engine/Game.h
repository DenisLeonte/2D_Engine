#ifndef GAME_H
#define GAME_H
#include <stdio.h>
#include <iostream>
#include <SDL.h>

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullScreen);
	
	void handleEvents();
	void update();
	void render();
	void clean();

	bool running() { return isRunning; }

private:
	bool isRunning;
	int cnt;
	SDL_Window *window;
	SDL_Renderer* renderer;

};

#endif

