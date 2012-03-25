#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_gfxPrimitives.h>
#include <SDL_framerate.h>
#include <SDL_ttf.h>
#include <string>
#include <vector>

class Gfx
{
public:
    Gfx();
    virtual ~Gfx();

    void clear();
    void render();
    void update();
    void delay();

    SDL_Surface *loadImage(std::string file);

    SDL_Surface* screen;
protected:
private:
    bool init();
    FPSmanager fpsman;
};
