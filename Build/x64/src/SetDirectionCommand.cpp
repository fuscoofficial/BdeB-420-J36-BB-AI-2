#include "SetDirectionCommand.h"

namespace Core
{
    SetDirectionCommand::SetDirectionCommand(PlayerDirection direction)
        : _direction(direction)
    {
    }

    void SetDirectionCommand::Execute(Player& player)
    {
        player.SetDirection(_direction);
    }
}