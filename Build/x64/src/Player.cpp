#include "Player.h"

namespace Core
{
    Player::Player(Vector2 position)
        : Actor(position),
        _direction(PlayerDirection::Down),
        _isMoving(false),
        _currentSpeed(0.0f),
        _maxSpeed(200.0f),
        _acceleration(600.0f),
        _deceleration(800.0f)
    {
    }

    void Player::SetDirection(PlayerDirection direction)
    {
        _direction = direction;
    }

    PlayerDirection Player::GetDirection() const
    {
        return _direction;
    }

    void Player::SetMoving(bool isMoving)
    {
        _isMoving = isMoving;
    }

    void Player::Move(float deltaTime)
    {
        if (_isMoving)
        {
            _currentSpeed += _acceleration * deltaTime;

            if (_currentSpeed > _maxSpeed)
            {
                _currentSpeed = _maxSpeed;
            }
        }
        else
        {
            _currentSpeed -= _deceleration * deltaTime;

            if (_currentSpeed < 0.0f)
            {
                _currentSpeed = 0.0f;
            }
        }

        if (_currentSpeed <= 0.0f)
        {
            return;
        }

        switch (_direction)
        {
        case PlayerDirection::Up:
            _position.y -= _currentSpeed * deltaTime;
            break;

        case PlayerDirection::Down:
            _position.y += _currentSpeed * deltaTime;
            break;

        case PlayerDirection::Left:
            _position.x -= _currentSpeed * deltaTime;
            break;

        case PlayerDirection::Right:
            _position.x += _currentSpeed * deltaTime;
            break;
        }
    }

    void Player::ClampToScreen(float screenWidth, float screenHeight)
    {
        constexpr float PLAYER_SIZE = 50.0f;

        if (_position.x < 0.0f)
        {
            _position.x = 0.0f;
        }

        if (_position.y < 0.0f)
        {
            _position.y = 0.0f;
        }

        if (_position.x > screenWidth - PLAYER_SIZE)
        {
            _position.x = screenWidth - PLAYER_SIZE;
        }

        if (_position.y > screenHeight - PLAYER_SIZE)
        {
            _position.y = screenHeight - PLAYER_SIZE;
        }
    }
}