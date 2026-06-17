#pragma once

#include "Actor.h"

namespace Core
{
    enum class PlayerDirection
    {
        Up,
        Down,
        Left,
        Right
    };

    class Player : public Actor
    {
    public:
        Player(Vector2 position);
        ~Player() override = default;

        void SetDirection(PlayerDirection direction);
        PlayerDirection GetDirection() const;

    private:
        PlayerDirection _direction;
    };
}