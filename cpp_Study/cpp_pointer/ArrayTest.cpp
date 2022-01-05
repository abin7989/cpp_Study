#include <iostream>
#include<iomanip>
using namespace std;
#define Max 100
void printArray();
void inputArrayNum();

int userInputNum;
int board[Max][Max] = {};

void main()
{
	cin >> userInputNum;
	inputArrayNum();
	printArray();
}

void inputArrayNum()
{
	int sic = 1 + (userInputNum - 1) * 2;
	int sicadr = sic;
	bool rev = false;
	int fri = 0;
	int last = 0;
	int startNum = 0;
	int fri2 = 0;
	int last2 = 0;
	int startNum2 = 0;

	int setNum=1;
	for (int i = 1; i <= sic; i++)
	{
		if (sicadr % 2 == 1)
		{
			if (!rev)
			{
				for (int j = fri; j < userInputNum - last; j++)
				{
					board[startNum][j] = setNum;
					setNum++;
				}
				fri2++;
			}
			else
			{
				for (int j = userInputNum - last; j >fri; j--)
				{
					board[userInputNum-startNum-1][j-1] = setNum;
					setNum++;
				}
				last2++;
				startNum++;
			}
		}
		else
		{
			if (!rev)
			{
				for (int j = fri2; j < userInputNum - last2; j++)
				{
					board[j][userInputNum - startNum2-1] = setNum;
					setNum++;
				}
				last++;
			}
			else
			{
				for (int j = userInputNum - last2; j > fri2; j--)
				{
					board[j-1][startNum2] = setNum;
					setNum++;
				}
				fri++;
				startNum2++;
			}
			rev = !rev;
		}
		sicadr--;
	}
}
void printArray()
{
	for (int i = 0; i < userInputNum; i++)
	{
		for (int j = 0; j < userInputNum; j++)
		{
			cout <<setfill('0')<<setw(2)<< board[i][j] << " ";
		}
		cout<<endl;
	}
}