#pragma once

#include "GameBase.h"
#include "Player.h"
#include "PlayerInputHandler.h"
#include "BehaviourTree.h"

using namespace BehaviourTree;

namespace Core
{
    class GameTest : public GameBase
    {
      // BehaviourTree::BehaviourTree _tree;
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