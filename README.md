# Costanza_v2
![Unhingen](/Costanza_v2/Unhingen/Res/Unhinged200x200.jpg?raw=true "Unhingen")
</br>The repository for the Unhinged Engine (or "Unhingen") and its debut sector-based raycasting game.

## Linux build instructions
- Since the engine is just a collection of helpful pieces of code, it makes sense to use it like a library.
- The MainComponent.cpp is just a simple testbed of sorts.
1. Install deps (assuming Ubuntu/debian) `sudo apt-get install libsdl2-dev libglew-dev libglm-dev`
2. Build the test bed `g++ Costanza_v2/Washington/MainComponent.cpp Costanza_v2/Unhingen/System/* Costanza_v2/Unhingen/Common/Vec2.* -lSDL2 -lGLEW -o Wash`
3. Then run the test bed with `./Wash`
