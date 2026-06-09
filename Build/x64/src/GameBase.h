#pragma once
namespace Core {

	class GameBase
	{
	public:
		virtual ~GameBase();

		//TODO
		//Starting point
		void run();
		//Handle input
		virtual void handleInput() = 0;
		//Update
		virtual void update() = 0;
		//Render
		virtual void render() = 0;


	protected:
		GameBase();

	};
}