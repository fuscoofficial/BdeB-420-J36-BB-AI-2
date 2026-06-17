#include "GameTest.h"
#include <raylib.h>
namespace Core
{
	GameTest::GameTest():_player({ 360.0f, 240.0f })
	{
		InitWindow(720, 480, "GameTest");
		SetTargetFPS(60);
	}

	GameTest::~GameTest()
	{
		CloseWindow();
	}


	void GameTest::handleInput()
	{
		if(WindowShouldClose())
		{
			_loop = false;
		}
	}

	void GameTest::update()
	{
		
	}

    void GameTest::render()
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        const Vector2 playerPosition = _player.GetPosition();

        constexpr float PLAYER_SIZE = 50.0f;
        constexpr float EYE_SIZE = 8.0f;

     
        DrawRectangleV(
            playerPosition,
            { PLAYER_SIZE, PLAYER_SIZE },
            BLUE
        );

     
        DrawRectangle(
            static_cast<int>(playerPosition.x + 10.0f),
            static_cast<int>(playerPosition.y + 12.0f),
            static_cast<int>(EYE_SIZE),
            static_cast<int>(EYE_SIZE),
            BLACK
        );

     
        DrawRectangle(
            static_cast<int>(playerPosition.x + 32.0f),
            static_cast<int>(playerPosition.y + 12.0f),
            static_cast<int>(EYE_SIZE),
            static_cast<int>(EYE_SIZE),
            BLACK
        );

      
        DrawRectangle(
            static_cast<int>(playerPosition.x + 15.0f),
            static_cast<int>(playerPosition.y + 35.0f),
            20,
            5,
            BLACK
        );

        EndDrawing();
    }



}