#pragma once

#include "IPlayerCommand.h"
#include "Player.h"

namespace Core
{
    class SetDirectionCommand : public IPlayerCommand
    {
    public:
        explicit SetDirectionCommand(PlayerDirection direction);

        void Execute(Player& player) override;

    private:
        PlayerDirection _direction;
    };
}