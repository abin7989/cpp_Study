#pragma once
#include"Creature.h"
enum MonsterType
{
	MT_SLIME = 1,
	MT_ORC,
	MT_SKELETON
};
class Monster:public Creature
{
public:
	Monster(int monsterType) :Creature(CT_MONSTER), _monsterType(monsterType)
	{

	}
	virtual void Printinfo();
protected:
	int _monsterType;
};

class Sliime:public Monster
{
public:
	Sliime() :Monster(MT_SLIME)
	{
		_hp = 50;
		_attack = 5;
		_defence = 2;
	}

private:
};

class Orc :public Monster
{
public:
	Orc() :Monster(MT_ORC)
	{
		_hp = 80;
		_attack = 8;
		_defence = 3;
	}

private:

};


class Skeleton :public Monster
{
public:
	Skeleton() :Monster(MT_SKELETON)
	{
		_hp = 100;
		_attack = 15;
		_defence = 4;
	}

private:

};
