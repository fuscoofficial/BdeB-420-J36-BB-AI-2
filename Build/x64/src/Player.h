#pragma once

#include "Actor.h"

namespace Core 
{

    class Player : public Actor
    {
    public:
        Player(Vector2 position);
        ~Player() override = default;
    };
}