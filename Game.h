#pragma once

#include <SDL.h>
#include "Gfx.h"
#include "Input.h"
#include "Physics.h"
#include "Vector.h"

#include <iostream>

class Game
{
public:
    Game();
    virtual ~Game();

    int run();
private:
    Gfx gfx;
    Input input;
    Physics physics;
};
