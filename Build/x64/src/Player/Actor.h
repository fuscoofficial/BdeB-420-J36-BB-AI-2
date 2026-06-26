#pragma once

#include "raylib.h"

class Actor
{
public:
    Actor(Vector2 position);
    virtual ~Actor() = default;

    Vector2 GetPosition() const;
    void SetPosition(Vector2 position);

protected:
    Vector2 _position;
};