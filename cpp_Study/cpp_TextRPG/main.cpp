#include <iostream>
#include"Game/Game.h"
using namespace std;

//���� Ŭ�� �ڵ�
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