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
		cout << "�κ� �����߽��ϴ�."<<endl;
		cout << "--------------------" << endl;
		cout << "--------------------" << endl;
		cout << "������ ����ּ���!" << endl;
		cout << "���(" << KNIGHT << ")" << " �ü�(" << ARCHER << ")" << " ����(" << WIZARD << ")"<<" ����("<< EXIT <<")" << endl;
		
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
				cout << "�ʵ忡 �����߽��ϴ�!" << endl;
				cout << "--------------------" << endl;
				cout << "[PLAYER] HP : " << G_userHP << " / ATT : " << G_userATT << " / DEF : " << G_userDEF <<endl;
				SpawnMonster(ranNum);
				cout << " (HP : " << G_monsterHp << " / ATT : " << G_monsterATT << " / DEF : " << G_monsterDEF <<")" << endl;
				cout << "(" << ATT << ") ���� (" << RUN << ") ����" << endl;
				
				cin >> playerA2R;
				if (playerA2R==1)
				{
					while (true)
					{
						if (!MonsterGetDamage())
						{
							cout << "���Ͱ� ��� �Ͽ����ϴ�." << endl;
							break;
						}
						if (!PlayerGetDamage())
						{
							cout << "�÷��̾ ����Ͽ����ϴ�." << endl;
							break;
						}
					}
				}
				else if(playerA2R == 2)
				{
					cout << "�÷��̾ �����ƽ��ϴ�." << endl;
					break;
				}
				else
				{
					cout << "�� �� ���� ����Դϴ�."<<endl;
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
		cout << "��� ������...!"<<endl;
		G_userHP = 100;
		G_userATT = 15;
		G_userDEF = 10;
		return true;
		break;
	case ARCHER:
		cout << "�ü� ������...!" << endl;
		G_userHP = 90;
		G_userATT = 20;
		G_userDEF = 5;
		return true;
		break;
	case WIZARD:
		cout << "���� ������...!" << endl;
		G_userHP = 80;
		G_userATT = 25;
		G_userDEF = 0;
		return true;
		break;
	default:
		cout << "�� �� ���� ����Դϴ�." << endl;
		return false;
		break;
	}
}

void SpawnMonster(int _spawnRandNum)
{
	switch (_spawnRandNum)
	{
	case OAK:
		cout << "��ũ ������...!";
		G_monsterHp = 40;
		G_monsterATT = 10;
		G_monsterDEF = 5;

		break;
	case SLIME:
		cout << "�ذ� ������...!";
		G_monsterHp = 50;
		G_monsterATT = 25;
		G_monsterDEF = 0;
		break;
	case SKULL:
		cout << "������ ������...!";
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
		cout << "���� ���� ü�� : " << G_monsterHp << endl;
		return false;
	}
	else
	{
		cout << "���� ���� ü�� : " << G_monsterHp << endl;
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
		cout << "�÷��̾� ���� ü�� : " << G_userHP << endl;
		return false;
	}
	else
	{
		cout << "�÷��̾� ���� ü�� : " << G_userHP << endl;
	}
	return true;
}