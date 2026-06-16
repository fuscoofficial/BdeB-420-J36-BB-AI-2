#include "Actor.h"

Actor::Actor(Vector2 position)
    : _position(position)
{
}

Vector2 Actor::GetPosition() const
{
    return _position;
}

void Actor::SetPosition(Vector2 position)
{
    _position = position;
}