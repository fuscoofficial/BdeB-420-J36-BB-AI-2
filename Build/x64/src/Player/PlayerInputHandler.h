#pragma once

#include "Player.h"
#include "SetDirectionCommand.h"

namespace Core
{
    class PlayerInputHandler
    {
    public:
        PlayerInputHandler();

        void HandleInput(Player& player);

    private:
        SetDirectionCommand _moveUpCommand;
        SetDirectionCommand _moveDownCommand;
        SetDirectionCommand _moveLeftCommand;
        SetDirectionCommand _moveRightCommand;
    };
}