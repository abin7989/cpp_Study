#include<iostream>
#include<string>
using namespace std;
enum Job
{
	KNIGHT = 1 ,
	ARCHER,
	WIZARD,
	EXIT
};
enum Monster
{
	OAK,
	SLIME,
	SKULL
};
enum Att2Run
{
	ATT = 1,
	RUN
};
int G_userHP;
int G_userATT;
int G_userDEF;
int G_monsterHp ;
int G_monsterATT;
int G_monsterDEF;

bool job(int _userChoiceNum);
void SpawnMonster(int _spawnRandNum);
bool MonsterGetDamage();
bool PlayerGetDamage();

int main()
{
	while (true)
	{
		
		cout << "--------------------" << endl;
		cout << "로비에 입장했습니다."<<endl;
		cout << "--------------------" << endl;
		cout << "--------------------" << endl;
		cout << "직업을 골라주세요!" << endl;
		cout << "기사(" << KNIGHT << ")" << " 궁수(" << ARCHER << ")" << " 법사(" << WIZARD << ")"<<" 종료("<< EXIT <<")" << endl;
		
		int userChoiceJob;
		cin >> userChoiceJob;
		if (userChoiceJob == EXIT)
		{
			return 0;
		}
		if(job(userChoiceJob))
		{
			while (true)
			{
				srand(time(0));
				int ranNum =(rand() % 3);
				int playerA2R;

				cout << "--------------------" << endl;
				cout << "필드에 입장했습니다!" << endl;
				cout << "--------------------" << endl;
				cout << "[PLAYER] HP : " << G_userHP << " / ATT : " << G_userATT << " / DEF : " << G_userDEF <<endl;
				SpawnMonster(ranNum);
				cout << " (HP : " << G_monsterHp << " / ATT : " << G_monsterATT << " / DEF : " << G_monsterDEF <<")" << endl;
				cout << "(" << ATT << ") 전투 (" << RUN << ") 도주" << endl;
				
				cin >> playerA2R;
				if (playerA2R==1)
				{
					while (true)
					{
						if (!MonsterGetDamage())
						{
							cout << "몬스터가 사망 하였습니다." << endl;
							break;
						}
						if (!PlayerGetDamage())
						{
							cout << "플레이어가 사망하였습니다." << endl;
							break;
						}
					}
				}
				else if(playerA2R == 2)
				{
					cout << "플레이어가 도망쳤습니다." << endl;
					break;
				}
				else
				{
					cout << "알 수 없는 명령입니다."<<endl;
				}
				if (G_userHP == 0)
				{
					break;
				}
			}
		}
	}
	return 0;
}
bool job(int _userChoiceNum)
{
	switch (_userChoiceNum)
	{
	case KNIGHT:
		cout << "기사 생성중...!"<<endl;
		G_userHP = 100;
		G_userATT = 15;
		G_userDEF = 10;
		return true;
		break;
	case ARCHER:
		cout << "궁수 생성중...!" << endl;
		G_userHP = 90;
		G_userATT = 20;
		G_userDEF = 5;
		return true;
		break;
	case WIZARD:
		cout << "법사 생성중...!" << endl;
		G_userHP = 80;
		G_userATT = 25;
		G_userDEF = 0;
		return true;
		break;
	default:
		cout << "알 수 없는 명령입니다." << endl;
		return false;
		break;
	}
}

void SpawnMonster(int _spawnRandNum)
{
	switch (_spawnRandNum)
	{
	case OAK:
		cout << "오크 생성중...!";
		G_monsterHp = 40;
		G_monsterATT = 10;
		G_monsterDEF = 5;

		break;
	case SLIME:
		cout << "해골 생성중...!";
		G_monsterHp = 50;
		G_monsterATT = 25;
		G_monsterDEF = 0;
		break;
	case SKULL:
		cout << "슬라임 생성중...!";
		G_monsterHp = 80;
		G_monsterATT = 15;
		G_monsterDEF = 5;
		break;
	default:
		break;
	}
}
bool MonsterGetDamage()
{
	int LastAtt =  G_userATT- G_monsterDEF;
	G_monsterHp -= LastAtt;
	if (G_monsterHp <= 0)
	{
		G_monsterHp = 0;
		cout << "몬스터 남은 체력 : " << G_monsterHp << endl;
		return false;
	}
	else
	{
		cout << "몬스터 남은 체력 : " << G_monsterHp << endl;
	}
	return true;
}
bool PlayerGetDamage()
{
	int LastAtt = G_monsterATT- G_userDEF;
	G_userHP -= LastAtt;
	
	if (G_userHP <= 0)
	{
		G_userHP = 0;
		cout << "플레이어 남은 체력 : " << G_userHP << endl;
		return false;
	}
	else
	{
		cout << "플레이어 남은 체력 : " << G_userHP << endl;
	}
	return true;
}