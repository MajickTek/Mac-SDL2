//this may work on other platforms

#include <SDL2/SDL.h>
#undef main //un-define SDL2's main function, this messes me up

void init() // initialize SDL2
{
	// initalise SDL
	if( SDL_Init( SDL_INIT_EVERYTHING ) == -1 )
	{
		std::cout << "SDL_Init: %s\n" << SDL_GetError( ) << std::endl;
		exit( 1 );
	}

}

void quit(std::string message) // Quit with messgage
{
	if( !message.empty() )
	{
#ifdef _DEBUG
		std::cerr << "Error: " << message << std::endl;
		abort();
#else
		exit( 1 );
#endif
	}

	
	SDL_Quit();

	exit( 0 );
}
