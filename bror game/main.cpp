#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <vector>
#include <chrono>


using namespace std;

#include "declarations.h"

int resx = 800;
int resy = 600;

void keydown(SDL_Scancode key)
{
	
}

void keyup(SDL_Scancode key)
{
	
}

void event()
{
	while(SDL_PollEvent(&e))
	{
		switch(e.type)
		{
			case SDL_QUIT:
			{
				SDL_DestroyWindow(window);
				SDL_Quit;
				break;
			}
			case SDL_KEYDOWN:
			{
				if(e.key.repeat == 0)
				{
					keydown(e.key.keysym.scancode);
					keysdown++;
				}
				break;
			}
			case SDL_KEYUP:
			{
				if(e.key.repeat == 0)
				{
					keyup(e.key.keysym.scancode);
					keysdown--;
				}
				break;
			}
			case SDL_CONTROLLERBUTTONDOWN:
			{
				//controller_button_down(e.cbutton.which, e.cbutton.button);
				if(remapping_controllers)
					break;
			}
			case SDL_CONTROLLERBUTTONUP:
			{
				//controller_button_up(e.cbutton.which, e.cbutton.button);
				break;
			}
		}
	}
}

void logic()
{

}

void render()
{

	SDL_SetRenderDrawColor(renderer, 0, 255, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);
	//render background

	//render build
	if(build_update)


	//render objects

	SDL_RenderPresent(renderer);
}

int main(int argc, char *argv[])
{
	if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
	}
	else
	{
		cout << "SDL initialization succeeded!";
	}

	if(IMG_Init(IMG_INIT_PNG) != IMG_INIT_PNG)
	{
		cerr << "image not init" << endl;
	}

	//cin >> resx;
	//cin >> resy;

	window = SDL_CreateWindow("thing", window_x, window_y, win_w, win_h, 0);
	renderer = SDL_CreateRenderer(window, 0, 0);

	frame_time_start = chrono::high_resolution_clock::now().time_since_epoch().count();

	while(running)
	{

		frame_time_stop = chrono::high_resolution_clock::now().time_since_epoch().count();

		frame_time = frame_time_stop - frame_time_start;

		frame_time_start = chrono::high_resolution_clock::now().time_since_epoch().count();
		
		event();

		logic();

		render();
		

	}


	cin.get();
	return 0;
}