#include <iostream>
#include"Game/Game.h"
using namespace std;

//강의 클론 코딩
void main()
{
	Game game;
	srand((unsigned int)time(nullptr));
	game.Init();
	while (true)
	{
		game.Update();
	}
}