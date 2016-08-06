#pragma once

// Check if win or linux to handle paths
#ifdef __linux__

#include <SDL2/SDL.h>
#include "../Unhingen/Common/Types.h"

#else

#include <SDL2\SDL.h>
#include "..\Unhingen\Commin\Types.h"

#endif

/* *
 * Display attempts to provide an abstracted interface to SDL2 and OpenGL
 * to allow easy creation of SLD windows and OpenGL contexts.
 *
 * Author: Cory Sabol - 2016
 * */

class Display {
    private:
        SDL_Window  *window;
        SDL_Surface *surface;

    public:
        Display (String title,
                int SDL_WINDOWPOS_X,
                int SDL_WINDOWPOS_Y,
                int WINDOW_WIDTH,
                int WINDOW_HEIGHT) {

        }
}
