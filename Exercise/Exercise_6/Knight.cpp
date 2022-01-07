#include "Knight.h"
#include <iostream>
using namespace std;

// [사양서] 기본값 Hp=100, Attack=10
Knight::Knight() : _hp(100), _maxHp(100), _attack(10)
{

}

Knight::Knight(int hp) : _hp(hp), _maxHp(hp), _attack(10)
{

}

Knight::~Knight()
{

}

void Knight::AddHp(int value)
{
	cout << "피격" << endl;
	_hp += value;
	if (_hp < 0)
		_hp = 0;
	if (_hp > _maxHp)
		_hp = _maxHp;
}

bool Knight::IsDead()
{
	return (_hp <= 0);
}

int Knight::GetAttackDamage()
{
	int damage = _attack;

	if (_maxHp > 0)
	{
		int percentage = (100 * _hp) / _maxHp;
		if (percentage <= 50)
			damage *= 2;
	}

	return damage;
}

void Knight::PrintInfo()
{
	cout << "HP: " << _hp << endl;
	cout << "ATT: " << _attack << endl;
}

void Knight::OnDamaged(Knight* attacker)
{
	if (attacker == nullptr)
		return;

	// 내 체력 깎는다
	int damage = attacker->GetAttackDamage();
	AddHp(-damage);

	if (!attacker->IsDead()&&!IsDead())
	{
		// 반격!
		attacker->OnDamaged(this);
	}
	else if (attacker->IsDead())
	{
		cout << "적 죽음" << endl;
	}
	else if (IsDead())
	{
		cout << "나 죽음" << endl;
	}
}