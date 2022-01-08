#include <iostream>
#include<vector>
using namespace std;
#include<algorithm>
void main()
{
	srand(static_cast<unsigned int>(time(nullptr)));

	vector<int> v;
	for (int i = 0; i < 10; ++i)
	{
		int num = rand() % 100;
		v.push_back(num);
	}

	//1)
	{
		int num = 50;
		  
		auto numcheck = find(v.begin(), v.end(), num);
		if (numcheck != v.end())
			cout << "찾다" << endl;
		else
			cout << "못찾다" << endl;
	}
	//2)
	{
		int num = 11;
		bool numCheck = false;

		auto it = find_if(v.begin(), v.end(), [](int num) {return num % 11 == 0; });
		numCheck = (it != v.end());

		if (numCheck)
		{
			cout << "앙" << endl;
		}
		else
		{
			cout << "없음" << endl;
		}
	}

	//3)
	{
		int numCheck = 0;
		numCheck = count_if(v.begin(), v.end(), [](int num) {return num % 2 == 1; });
		cout << numCheck << endl;

	}

	//4)
	{

		cout << "-----------------------------" << endl;
		for_each(v.begin(), v.end(), [](int& num) {num *= 3; cout << num << endl; });
		cout << "-----------------------------" << endl;
	}

	//5)
	{
		v.erase(
			remove_if(v.begin(), v.end(), [](int num) {return num % 2 == 1; })
			, v.end());

		cout << "-----------------------------" << endl;
		for_each(v.begin(), v.end(), [](int num) {cout << num << endl; });
		cout << "-----------------------------" << endl;
	}

}
