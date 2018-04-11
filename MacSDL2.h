//this may work on other platforms

//this is in c++ and has commented-out c

#include <SDL2/SDL.h>
//#include <stdio.h>
#include <cstdio>

#undef main //un-define SDL2's main function, this messes me up

void init() // initialize SDL2
{
	// initalise SDL
	if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
	{
		std::cout << "SDL_Init: %s\n" << SDL_GetError( ) << std::endl;
		//printf("SDL_Init: %s\n", SDL_GetError());
		exit( 1 );
	}

}

void quit(std::string message) // Quit with messgage | in C use char[] message instead
{
	if( !message.empty() ) // in C you could do this as if (message && !*message)
	{
#ifdef _DEBUG
		std::cerr << "Error: " << message << std::endl; // in C this is printf("Error: %s", message);
		abort();
#else
		exit( 1 );
#endif
	}

	
	SDL_Quit();

	exit( 0 );
}
