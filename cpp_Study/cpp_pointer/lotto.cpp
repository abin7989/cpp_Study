//#include <iostream>
//
//using namespace std;
//
//void Swap(int* num1, int* num2);
//void Sort(int* numbers, int count);
//void chooseLotto(int* _numbers, int count);
//void main()
//{
//	const int numCount = 6;
//	int numbers[numCount];
//	chooseLotto(numbers,numCount);
//	
//	
//
//
//}
//void chooseLotto(int* _numbers);
//void Swap(int* num1, int* num2)
//{
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//
//}
//void Sort(int* _numbers, int count)
//{
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = i+1; j < count; j++)
//		{
//			if (_numbers[i] > _numbers[j])
//			{
//				Swap(&_numbers[j], &_numbers[i]);
//			}
//		}
//	}
//	cout << "¹øÈ£ : ";
//	for (int i = 0; i < count; i++)
//		cout << _numbers[i] << " ";
//	cout << endl;
//}
////i 0 1 
////j 1 45
//
//void chooseLotto(int* _numbers,int count)
//{
// 	srand(time(0));
//	int size = 0;
//	bool isNone = false;
//	while (size < count)
//	{
//		int ran = 1 + (rand() % 45);
//		if (size == 0)
//		{
//			_numbers[0] = ran;
//			size++;
//			Sort(_numbers, size);
//
//		}
//		for (int i = 0; i < size; i++)
//		{
//			if (_numbers[i] == ran)
//			{
//				isNone = false;
//				break;
//			}
//			else
//			{
//				isNone = true;
//			}
//		}
//		if (isNone)
//		{
//			_numbers[size] = ran;
//			size++;
//			Sort(_numbers, size);
//		}
//	}
//	
//
//}