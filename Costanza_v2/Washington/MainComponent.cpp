#include <iostream>
#include <stdio.h>

#include <SDL2\SDL.h>

#include "..\Unhingen\Common\Types.h"
#include "..\Unhingen\System\CommandLine.h"

const u_short WINDOW_WIDTH = 800;
const u_short WINDOW_HEIGHT = 600;

s_int main ( s_int argc, char *argv[] ) {

	/* For now, the main function is more of a test ground
	   for the engine... */

	CommandLine *com = new CommandLine( ( u_byte ) argc, ( const char** ) argv );
	com->PrintTokens();

	SDL_Window *window = null;
	SDL_Surface *surface = null;

	if ( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
		printf( "SDL did not initialize! SDL Error: %s\n", SDL_GetError() );
		return 1;
	}

	window = SDL_CreateWindow(
		"Washington Unhinged 3D",
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		WINDOW_WIDTH,
		WINDOW_HEIGHT,
		SDL_WINDOW_SHOWN
	);

	if ( window == null ) {
		printf( "The window was not initialized! SDL Error: %s\n", SDL_GetError() );
		return 1;
	}

	surface = SDL_GetWindowSurface( window );
	SDL_FillRect( surface, null, SDL_MapRGB( surface->format, 0xff, 0x00, 0x00 ) );
	SDL_UpdateWindowSurface( window );
	SDL_Delay( 5000 );

	SDL_DestroyWindow( window );
	SDL_Quit();
	delete com;
	system( "PAUSE" );
	return 0;
}