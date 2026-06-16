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

		EndDrawing();
	}



}