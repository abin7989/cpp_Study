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
//		cout << "로비에 입장했습니다." << endl;
//		cout << "--------------------" << endl;
//		cout << "--------------------" << endl;
//		cout << "직업을 골라주세요!" << endl;
//		cout << "기사(" << KNIGHT << ")" << " 궁수(" << ARCHER << ")" << " 법사(" << WIZARD << ")" << " 종료(" << EXIT << ")" << endl;
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
//				cout << "필드에 입장했습니다!" << endl;
//				cout << "--------------------" << endl;
//				cout << "[PLAYER] HP : " << userHP << " / ATT : " << userATT << " / DEF : " << userDEF << endl;
//				SpawnMonster(ranNum,&monsterHp,&monsterATT,&monsterDEF);
//				cout << " (HP : " << monsterHp << " / ATT : " << monsterATT << " / DEF : " << monsterDEF << ")" << endl;
//				cout << "(" << ATT << ") 전투 (" << RUN << ") 도주" << endl;
//
//				cin >> playerA2R;
//				if (playerA2R == 1)
//				{
//					while (true)
//					{
//						if (!MonsterGetDamage(&userATT,&monsterDEF,&monsterHp))
//						{
//							cout << "몬스터가 사망 하였습니다." << endl;
//							break;
//						}
//						if (!PlayerGetDamage(&monsterATT,&userDEF,&userHP))
//						{
//							cout << "플레이어가 사망하였습니다." << endl;
//							break;
//						}
//					}
//				}
//				else if (playerA2R == 2)
//				{
//					cout << "플레이어가 도망쳤습니다." << endl;
//					break;
//				}
//				else
//				{
//					cout << "알 수 없는 명령입니다." << endl;
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
//		cout << "기사 생성중...!" << endl;
//		*hp  = 100;
//		*att = 15;
//		*Def = 5;
//		return true;
//		break;
//	case ARCHER:
//		cout << "궁수 생성중...!" << endl;
//		*hp = 90;
//		*att = 20;
//		*Def = 3;
//		return true;
//		break;
//	case WIZARD:
//		cout << "법사 생성중...!" << endl;
//		*hp = 80;
//		*att = 25;
//		*Def = 0;
//		return true;
//		break;
//	default:
//		cout << "알 수 없는 명령입니다." << endl;
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
//		cout << "오크 생성중...!";
//		*hp = 40;
//		*att = 10;
//		*Def = 5;
//		break;
//	case SLIME:
//		cout << "해골 생성중...!";
//		*hp = 50;
//		*att = 25;
//		*Def = 0;
//		break;
//	case SKULL:
//		cout << "슬라임 생성중...!";
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
//		cout << "몬스터 남은 체력 : " << *monsterHp << endl;
//		return false;
//	}
//	else
//	{
//		cout << "몬스터 남은 체력 : " << *monsterHp << endl;
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
//		cout << "플레이어 남은 체력 : " << *userHp << endl;
//		return false;
//	}
//	else
//	{
//		cout << "플레이어 남은 체력 : " << *userHp << endl;
//	}
//	return true;
//}