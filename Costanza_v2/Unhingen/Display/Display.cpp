#include "Display.h"

Display::Display () {

    // Add check to see if SDL has been initialized.
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 ) {
        // we should probably handle this with an exception not a string.
        //printf( "SDL did not initialize! SDL Error: %s\n", SDL_GetError() );
        //throw SDL_GetError();
    }

}

void Display::InitWindow (u_short WINDOW_WIDTH, u_short WINDOW_HEIGHT) {

    // This should have title too.

    this->WINDOW_WIDTH  = WINDOW_WIDTH;
    this->WINDOW_HEIGHT = WINDOW_HEIGHT;

    // Create the window and show it.
    this->window = SDL_CreateWindow(
        //this->windowTitle,
        "Unhingen Test Bed",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        this->WINDOW_WIDTH,
        this->WINDOW_HEIGHT,
        SDL_WINDOW_SHOWN
    );

    if ( this->window == null ) {
        // should also handle this with an exception.
        //printf( "The window was not initialized! SDL Error: %s\n", SDL_GetError() );
        //throw SDL_GetError();
    }
    
}

void Display::InitSurface () {
    // Initialize the surface for the window
    this->surface = SDL_GetWindowSurface( this->window );
}  

SDL_Window* Display::GetWindow() {
    return this->window;
}

SDL_Surface* Display::GetSurface() {
    return this->surface;
}

// Should we quit SDL once a display is destroyed?
Display::~Display() {
    SDL_DestroyWindow( this->window );
    SDL_Quit();
}
