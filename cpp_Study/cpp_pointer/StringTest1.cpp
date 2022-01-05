//#include <iostream>
//
//using namespace std;
//
//int StrLen(const char* str);
//void StrCopy(char* str2, const char* str);
//void StrCat(char* str, const char* str2);
//int StrCmp(const char* str, const char* str2);
//void ReverseStr(char* str);
//void main()
//{
//	const int BUF_SIZE = 100;
//	char a[BUF_SIZE] = "Hello";
//	char b[BUF_SIZE] = "Hell";
//	ReverseStr(a);
//	cout << a << endl;
//	int Strsize = StrLen(a);
//	cout << Strsize<<endl;
//	StrCopy( b, a);
//	cout << b<<endl;
//	StrCat(a, b);
//	cout << a<<endl;
//	cout << StrCmp(a, b) << endl;
//}
//
//int StrLen(const char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//void StrCopy(char* str2, const char* str)
//{
//	int i = 0;
//	for (; i < StrLen(str); i++)
//	{
//		str2[i] = str[i];
//	}
//	str2[i] = '\0';
//}
//void StrCat(char* str, const char* str2)
//{
//	int strcount = StrLen(str);
//	for (int i = 0; i <StrLen(str2); i++)
//	{
//		str[i+ strcount] = str2[i];
//	}
//}
//
//int StrCmp(const char* str, const char* str2)
//{
//	int maxSize = 0;
//	int strsize = StrLen(str);
//	int str2size = StrLen(str2);
//	if (strsize > str2size)
//	{
//		maxSize = strsize;
//	}
//	else
//	{
//		maxSize = str2size;
//	}
//
//	for (int i = 0; i < maxSize; i++)
//	{
//		
//		if (str[i] != str2[i])
//		{
//			if (str[i] > str2[i])
//			{
//				return -1;
//			}
//			else
//			{
//				return 1;
//			}
//		}
//	}
//
//	return 0;
//}
//
//void ReverseStr(char* str)
//{
//	강의 풀이
//	int len = StrLen(str);
//	for(int i = 0; i<len/2; i++)
//	{
//		int tmp = str[i];
//		str[i] = str[len - 1 - i];
//		str[len - 1 - i] = tmp;
//	}
//}
////{
////	int maxSize = StrLen(str);
////	int strSize = maxSize-1;
////	char temp[BUFSIZ];
////	int i = 0;
////	for (; i < maxSize; i++)
////	{
////		temp[i] = str[strSize];
////		strSize--;
////	}
////	temp[i] = '\0';
////
////	for (i = 0; i < maxSize; i++)
////	{
////		str[i] = temp[i];
////	}
////}