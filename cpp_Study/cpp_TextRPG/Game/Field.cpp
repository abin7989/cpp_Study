#include <iostream>
#include "Field.h"
#include "../Creature/Monster.h"
#include "../Creature/Player.h"
Field::Field() :_monster(nullptr)
{

}
Field::~Field()
{
	if (_monster != nullptr)
	{
		delete _monster;
	}
}

void Field::Update(Player* player)
{
	if (_monster == nullptr)
		CreateMonster();

	StartBattle(player);
}
void Field::CreateMonster()
{
	int ranValue = 1 + rand()%3;
	switch (ranValue)
	{
	case MT_SLIME:
		_monster = new Sliime();
		break;
	case MT_ORC:
		_monster = new Orc();
		break;
	case MT_SKELETON:
		_monster = new Skeleton();
		break;
	default:
		break;
	}
}
void Field::StartBattle(Player* player)
{
	while (true)
	{
		player->Printinfo();
		_monster->Printinfo();

		_monster->OnAttacked(player);
		if (_monster->IsDead())
		{
			_monster->Printinfo();
			delete _monster;
			_monster = nullptr;
			break;
		}

		player->OnAttacked(_monster);
		if (player->IsDead())
		{
			player->Printinfo();
			break;
		}
	}
}