#pragma once

#include "GameBase.h"
#include "Player.h"

namespace Core
{
    class GameTest : public GameBase
    {
    private:
        Player _player;

    public:
        GameTest();
        ~GameTest() override;

        void handleInput() override;
        void update() override;
        void render() override;
    };
}