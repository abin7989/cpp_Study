//#include<iostream>
//using namespace std;
//
//struct StateInfo
//{
//	int hp;
//	int attack;
//	int defence;
//};
//
//void EnterLobby();
//StateInfo CreatePlayer();
//void CreateMonster(StateInfo* info);
//void main()
//{
//
//}
//void EnterLobby()
//{
//	cout << "로비에 입장 했습니다." << endl;
//	StateInfo playerInfo;
//	playerInfo = CreatePlayer();
//	StateInfo monsterInfo;
//	CreateMonster(&monsterInfo);
//
//}
//
//StateInfo CreatePlayer()
//{
//	StateInfo ret;
//	cout << "플레이어 생성" << endl;
//	ret.hp = 100;
//	ret.attack = 10;
//	ret.defence = 2;
//	return ret;
//}
//void CreateMonster(StateInfo* info)
//{
//	cout << "몬스터 생성 생성" << endl;
//
//	info->hp = 80;
//	info->attack = 5;
//	info->defence = 1;
//}