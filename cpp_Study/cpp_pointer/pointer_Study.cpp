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
//	cout << "�κ� ���� �߽��ϴ�." << endl;
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
//	cout << "�÷��̾� ����" << endl;
//	ret.hp = 100;
//	ret.attack = 10;
//	ret.defence = 2;
//	return ret;
//}
//void CreateMonster(StateInfo* info)
//{
//	cout << "���� ���� ����" << endl;
//
//	info->hp = 80;
//	info->attack = 5;
//	info->defence = 1;
//}