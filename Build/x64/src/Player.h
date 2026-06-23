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

        void SetMoving(bool isMoving);
        void Move(float deltaTime);
        void ClampToScreen(float screenWidth, float screenHeight);

    private:
        PlayerDirection _direction;
        bool _isMoving;
        float _currentSpeed;
        float _maxSpeed;
        float _acceleration;
        float _deceleration;
    };
}