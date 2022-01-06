#pragma once
#include "Creature.h"
enum PlayerType
{
	PT_Knight = 1,
	PT_Archer,
	PT_Mage
};
class Player:public Creature
{
public:
	Player(int PlayerType) : Creature(CT_PLATER), _playerType(PlayerType)
	{

	}
	virtual ~Player()
	{

	}
	virtual void Printinfo();
protected:
	int _playerType;
};

class Knight:public Player
{
public:
	Knight() :Player(PT_Knight)
	{
		_hp = 150;
		_attack = 10;
		_defence = 5;
	}
private:

};

class Archer :public Player
{
public:
	Archer() :Player(PT_Archer)
	{
		_hp = 80;
		_attack = 15;
		_defence = 3;
	}
private:

};

class Mage :public Player
{
public:
	Mage() :Player(PT_Mage)
	{
		_hp = 50;
		_attack = 25;
		_defence = 3;
	}
private:

};
