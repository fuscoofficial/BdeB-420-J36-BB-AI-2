#include "PlayerInputHandler.h"

#include "raylib.h"

namespace Core
{
    PlayerInputHandler::PlayerInputHandler()
        : _moveUpCommand(PlayerDirection::Up),
        _moveDownCommand(PlayerDirection::Down),
        _moveLeftCommand(PlayerDirection::Left),
        _moveRightCommand(PlayerDirection::Right)
    {
    }

    void PlayerInputHandler::HandleInput(Player& player)
    {
        player.SetMoving(false);

        if (IsKeyDown(KEY_W) || IsKeyDown(KEY_UP))
        {
            _moveUpCommand.Execute(player);
        }
        else if (IsKeyDown(KEY_S) || IsKeyDown(KEY_DOWN))
        {
            _moveDownCommand.Execute(player);
        }
        else if (IsKeyDown(KEY_A) || IsKeyDown(KEY_LEFT))
        {
            _moveLeftCommand.Execute(player);
        }
        else if (IsKeyDown(KEY_D) || IsKeyDown(KEY_RIGHT))
        {
            _moveRightCommand.Execute(player);
        }
    }
}