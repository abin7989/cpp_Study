//#include<iostream>
//#include<string>
//using namespace std;
//enum Job
//{
//	KNIGHT = 1,
//	ARCHER,
//	WIZARD,
//	EXIT
//};
//enum Monster
//{
//	OAK,
//	SLIME,
//	SKULL
//};
//enum Att2Run
//{
//	ATT = 1,
//	RUN
//};
//bool job(int _userChoiceNum, int* hp, int* att, int* Def);
//void SpawnMonster(int _spawnRandNum, int* hp, int* att, int* Def);
//bool MonsterGetDamage(int* userAtt, int* monsterDef, int* monsterHp);
//bool PlayerGetDamage(int* monsterAtt, int* userDef, int* userHp);
//
//int main()
//{
//	while (true)
//	{
//		int userHP;
//		int userATT;
//		int userDEF;
//
//
//		cout << "--------------------" << endl;
//		cout << "�κ� �����߽��ϴ�." << endl;
//		cout << "--------------------" << endl;
//		cout << "--------------------" << endl;
//		cout << "������ ����ּ���!" << endl;
//		cout << "���(" << KNIGHT << ")" << " �ü�(" << ARCHER << ")" << " ����(" << WIZARD << ")" << " ����(" << EXIT << ")" << endl;
//
//		int userChoiceJob;
//		cin >> userChoiceJob;
//		if (userChoiceJob == EXIT)
//		{
//			return 0;
//		}
//		if (job(userChoiceJob,&userHP,&userATT,&userDEF))
//		{
//			while (userHP!=0)
//			{
//				srand(time(0));
//				int ranNum = (rand() % 3);
//				int playerA2R;
//				int monsterHp;
//				int monsterATT;
//				int monsterDEF;
//				cout << "--------------------" << endl;
//				cout << "�ʵ忡 �����߽��ϴ�!" << endl;
//				cout << "--------------------" << endl;
//				cout << "[PLAYER] HP : " << userHP << " / ATT : " << userATT << " / DEF : " << userDEF << endl;
//				SpawnMonster(ranNum,&monsterHp,&monsterATT,&monsterDEF);
//				cout << " (HP : " << monsterHp << " / ATT : " << monsterATT << " / DEF : " << monsterDEF << ")" << endl;
//				cout << "(" << ATT << ") ���� (" << RUN << ") ����" << endl;
//
//				cin >> playerA2R;
//				if (playerA2R == 1)
//				{
//					while (true)
//					{
//						if (!MonsterGetDamage(&userATT,&monsterDEF,&monsterHp))
//						{
//							cout << "���Ͱ� ��� �Ͽ����ϴ�." << endl;
//							break;
//						}
//						if (!PlayerGetDamage(&monsterATT,&userDEF,&userHP))
//						{
//							cout << "�÷��̾ ����Ͽ����ϴ�." << endl;
//							break;
//						}
//					}
//				}
//				else if (playerA2R == 2)
//				{
//					cout << "�÷��̾ �����ƽ��ϴ�." << endl;
//					break;
//				}
//				else
//				{
//					cout << "�� �� ���� ����Դϴ�." << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}
//bool job(int _userChoiceNum, int* hp,int* att,int* Def)
//{
//	switch (_userChoiceNum)
//	{
//	case KNIGHT:
//		cout << "��� ������...!" << endl;
//		*hp  = 100;
//		*att = 15;
//		*Def = 5;
//		return true;
//		break;
//	case ARCHER:
//		cout << "�ü� ������...!" << endl;
//		*hp = 90;
//		*att = 20;
//		*Def = 3;
//		return true;
//		break;
//	case WIZARD:
//		cout << "���� ������...!" << endl;
//		*hp = 80;
//		*att = 25;
//		*Def = 0;
//		return true;
//		break;
//	default:
//		cout << "�� �� ���� ����Դϴ�." << endl;
//		return false;
//		break;
//	}
//}
//
//void SpawnMonster(int _spawnRandNum,int* hp, int* att, int* Def)
//{
//	switch (_spawnRandNum)
//	{
//	case OAK:
//		cout << "��ũ ������...!";
//		*hp = 40;
//		*att = 10;
//		*Def = 5;
//		break;
//	case SLIME:
//		cout << "�ذ� ������...!";
//		*hp = 50;
//		*att = 25;
//		*Def = 0;
//		break;
//	case SKULL:
//		cout << "������ ������...!";
//		*hp = 80;
//		*att = 15;
//		*Def = 5;
//		break;
//	default:
//		break;
//	}
//}
//bool MonsterGetDamage(int* userAtt,int * monsterDef,int* monsterHp)
//{
//	int LastAtt = *userAtt - *monsterDef;
//	*monsterHp -= LastAtt;
//	if (*monsterHp <= 0)
//	{
//		*monsterHp = 0;
//		cout << "���� ���� ü�� : " << *monsterHp << endl;
//		return false;
//	}
//	else
//	{
//		cout << "���� ���� ü�� : " << *monsterHp << endl;
//	}
//	return true;
//}
//bool PlayerGetDamage(int* monsterAtt, int* userDef, int* userHp)
//{
//	int LastAtt = *monsterAtt - *userDef;
//	*userHp -= LastAtt;
//
//	if (*userHp <= 0)
//	{
//		*userHp = 0;
//		cout << "�÷��̾� ���� ü�� : " << *userHp << endl;
//		return false;
//	}
//	else
//	{
//		cout << "�÷��̾� ���� ü�� : " << *userHp << endl;
//	}
//	return true;
//}