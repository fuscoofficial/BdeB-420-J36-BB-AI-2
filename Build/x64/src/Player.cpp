#include "Player.h"

namespace Core
{
    Player::Player(Vector2 position)
        : Actor(position),
        _direction(PlayerDirection::Down)
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


}