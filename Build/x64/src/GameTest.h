#pragma once

#include "GameBase.h"
#include "Player.h"
#include "PlayerInputHandler.h"

namespace Core
{
    class GameTest : public GameBase
    {
    private:
        Player _player;
        PlayerInputHandler _inputHandler;

    public:
        GameTest();
        ~GameTest() override;

        void handleInput() override;
        void update() override;
        void render() override;
    };
}