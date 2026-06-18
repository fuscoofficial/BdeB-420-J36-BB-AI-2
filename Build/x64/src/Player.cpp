#include "Player.h"

namespace Core
{
    Player::Player(Vector2 position)
        : Actor(position),
        _direction(PlayerDirection::Down),
        _isMoving(false),
        _speed(200.0f)
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
        if (!_isMoving)
        {
            return;
        }

        switch (_direction)
        {
        case PlayerDirection::Up:
            _position.y -= _speed * deltaTime;
            break;

        case PlayerDirection::Down:
            _position.y += _speed * deltaTime;
            break;

        case PlayerDirection::Left:
            _position.x -= _speed * deltaTime;
            break;

        case PlayerDirection::Right:
            _position.x += _speed * deltaTime;
            break;
        }
    }
}