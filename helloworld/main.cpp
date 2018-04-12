#include "../MacSDL2.h"

#define SCREEN_WIDTH 640
#define SCREEN_HEIGHT 480

//this is in c++ with C comments
int main(int argc, char* argv[]) {
    init();
    SDL_Window* window = NULL;
    SDL_Surface* screenSurface = NULL;
  
    window = SDL_CreateWindow(
			    "hello_sdl2",
			    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
			    SCREEN_WIDTH, SCREEN_HEIGHT,
			    SDL_WINDOW_SHOWN
			    );
  if (window == NULL) {
    //fprintf(stderr, "could not create window: %s\n", SDL_GetError());
    quit("Could not create window: ");
    return 1;
  }
  screenSurface = SDL_GetWindowSurface(window);
  SDL_FillRect(screenSurface, NULL, SDL_MapRGB(screenSurface->format, 0xFF, 0xFF, 0xFF));
  SDL_UpdateWindowSurface(window);
  SDL_Delay(2000);
  SDL_DestroyWindow(window);
  SDL_Quit();
  return 0;
}
