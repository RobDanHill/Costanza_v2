#pragma once

// Check if win or linux to handle paths
#ifdef __linux__

#include <SDL2/SDL.h>
#include "../Common/Types.h"

#else

#include <SDL2\SDL.h>
#include "..\Common\Types.h"

#endif

#include <string>

/* *
 * Display attempts to provide an abstracted interface to SDL2 and OpenGL
 * to allow easy creation of SLD windows and OpenGL contexts.
 *
 * Author: Cory Sabol - 2016
 * */

class Display {

    private:
        SDL_Window  *window  = null;
        SDL_Surface *surface = null;

        u_short WINDOW_WIDTH;
        u_short WINDOW_HEIGHT;

    public:
        /**
         * Constructor
         */
        Display ();

        void InitWindow(u_short WINDOW_WIDTH, u_short WINDOW_HEIGHT);

        void InitSurface();

        SDL_Window* GetWindow();

        SDL_Surface* GetSurface();

        ~Display();

};
