//#include <iostream>
//#include<vector>
//using namespace std;
//
//void main()
//{
//	srand(static_cast<unsigned int>(time(nullptr)));
//
//	vector<int> v;
//	for (int i = 0; i < 10; ++i)
//	{
//		int num = rand() % 100;
//		v.push_back(num);
//	}
//
//	{
//		int num = 50;
//		bool numCheck = false;
//
//		for (auto it = v.begin(); it != v.end(); ++it)
//		{
//			if (*it == num)
//			{
//				numCheck = true;
//				break;
//			}
//		}
//		if (numCheck)
//		{
//			cout << "¾Ó" << endl;
//		}
//		else
//		{
//			cout << "¾øÀ½" << endl;
//		}
//	}
//	
//	{
//		int num = 11;
//		bool numCheck = false;
//		for (auto it = v.begin(); it != v.end(); ++it)
//		{
//			if (*it % num == 0)
//			{
//				numCheck = true;
//				break;
//			}
//		}
//		if (numCheck)
//		{
//			cout << "¾Ó" << endl;
//		}
//		else
//		{
//			cout << "¾øÀ½" << endl;
//		}
//	}
//	
//	{
//		int numCheck = 0;
//		for (auto it = v.begin(); it != v.end(); ++it)
//		{
//			if (*it % 2 == 1)
//			{
//				++numCheck;
//			}
//		}
//		
//		cout << numCheck << endl;
//		
//	}
//
//	cout << "-----------------------------" << endl;
//	for (auto ita = v.begin(); ita != v.end(); ++ita)
//	{
//		cout << *ita << endl;
//	}
//	cout << "-----------------------------"<< endl;
//	{
//		int num= 3;
//		for (auto it = v.begin(); it != v.end(); ++it)
//		{
//			*it *= num;
//		}
//
//	}
//	cout << "-----------------------------" << endl;
//	for (auto ita = v.begin(); ita != v.end(); ++ita)
//	{
//		cout << *ita << endl;
//	}
//	cout << "-----------------------------" << endl;
//}
