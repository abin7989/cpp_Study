#include <iostream>
using namespace std;
#include "Player.h"


void Player::Printinfo()
{
	cout << "--------------" << endl;
	cout << "플레이어 HP : " << _hp << " ATT : " << _attack << " DEF : " << _defence << endl;
	cout << "--------------" << endl;
}