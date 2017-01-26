#include <iostream>
#include <stdio.h>

#ifdef __linux__

#include <SDL2/SDL.h>

#include "../Unhingen/Common/Types.h"
#include "../Unhingen/Common/Vector/Vec2.h"
#include "../Unhingen/System/CommandLine.h"
#include "../Unhingen/Display/Display.h"

#else

#include <SDL2\SDL.h>

#include "..\Unhingen\Common\Types.h"
#include "..\Unhingen\System\CommandLine.h"
#include "..\Unhingen\Display\Display.h"

#endif

const u_short WINDOW_WIDTH = 800;
const u_short WINDOW_HEIGHT = 600;

const char* WINDOW_TITLE = "Unhingen Test Bed";

s_int main ( s_int argc, char *argv[] ) {

	/* For now, the main function is more of a test ground
	   for the engine... */

    // Trying to make calls to the following code produces an undefined ref error
	CommandLine *com = new CommandLine( ( u_byte ) argc, ( const char** ) argv );
	com->PrintTokens();

		printf( "SDL did not initialize! SDL Error: %s\n", SDL_GetError() );
		return 1;
	}*/

    Display *disp = new Display(); 
    disp->InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT);
    disp->InitSurface();

	/*if ( window == null ) {
		printf( "The window was not initialized! SDL Error: %s\n", SDL_GetError() );
		return 1;
	}*/

	//surface = SDL_GetWindowSurface( window );
	SDL_FillRect( disp->GetSurface(), null, SDL_MapRGB( disp->GetSurface()->format, 0xff, 0x06, 0xf0 ) );
	SDL_UpdateWindowSurface( disp->GetWindow() );
	SDL_Delay( 5000 );

	//SDL_DestroyWindow( window );
    delete disp;
	SDL_Quit();
	delete com;
	//system( "PAUSE" );
	return 0;
}
