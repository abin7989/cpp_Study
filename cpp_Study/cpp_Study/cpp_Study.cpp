//#include <iostream>
//#include <string>
//
//using namespace std;
//const int SCISSORS = 1;
//const int ROCK = 2;
//const int PAPER = 3;
//
//string winNum(int _allGame, int _userWin);
//int main()
//{
//	int allGame = 0;
//	int userWin = 0;
//
//	while (true)
//	{
//		srand(time(0));
//		int ranNum = 1 + (rand() % 3);
//		int userInput;
//		cout << "가위(1) 바위(2) 보(3) 골라주세요!" << endl;
//		cout << "> 현재 승률 : " + winNum(allGame, userWin) << endl;
//		cout << "총 판수 : " << allGame << " 승 수 :"<<userWin << endl;
//		cin >> userInput;
//		switch(userInput)
//		{
//		case SCISSORS:
//			if (ranNum == SCISSORS)
//			{
//				cout << "컴퓨터가 가위(1)를 냈습니다. 무승부";
//			}
//			else if (ranNum == ROCK)
//			{
//				cout << "컴퓨터가 바위(2)를 냈습니다. 컴퓨터 승";
//				allGame++;
//			}
//			else
//			{
//				cout << "컴퓨터가 보(3)를 냈습니다. 유저 승";
//				allGame++;
//				userWin++;
//			}
//			break;
//		case ROCK:
//			if (ranNum == SCISSORS)
//			{
//				cout << "컴퓨터가 가위(1)를 냈습니다. 유저 승";
//				allGame++;
//				userWin++;
//			}
//			else if (ranNum == ROCK)
//			{
//				cout << "컴퓨터가 바위(2)를 냈습니다. 무승부";
//			}
//			else
//			{
//				cout << "컴퓨터가 보(3)를 냈습니다. 컴퓨터 승";
//				allGame++;
//			}
//			break;
//		case PAPER:
//			if (ranNum == SCISSORS)
//			{
//				cout << "컴퓨터가 가위(1)를 냈습니다. 컴퓨터 승";
//				allGame++;
//			}
//			else if (ranNum == ROCK)
//			{
//				cout << "컴퓨터가 바위(2)를 냈습니다. 유저 승";
//				allGame++;
//				userWin++;
//			}
//			else
//			{
//				cout << "컴퓨터가 보(3)를 냈습니다. 무승부";
//			}
//			break;
//		default:
//			return 0;
//			break;
//		}
//		
//		cout << endl;
//	}
//}
//
//string winNum(int _allGame, int _userWin)
//{
//	if (_allGame == 0)
//		return "없음";
//
//	int win = (_userWin * 100) / _allGame;
//	return to_string(win) + "%";
//}
