#include <iostream>
using namespace std;
#include "Monster.h"


void Monster::Printinfo()
{
	cout << "--------------" << endl;
	cout << "���� HP : " << _hp << " ATT : " << _attack << " DEF : " << _defence << endl;
	cout << "--------------" << endl;
}