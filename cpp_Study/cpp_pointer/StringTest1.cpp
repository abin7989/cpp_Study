#include <iostream>

using namespace std;

int StrLen(const char* str);
void StrCopy(char* str2, const char* str);
void StrCat(char* str, const char* str2);
void main()
{
	const int BUF_SIZE = 100;
	char a[BUFSIZ] = "Hello";
	char b[BUFSIZ] = " World";
	int Strsize = StrLen(a);
	cout << Strsize<<endl;
	/*StrCopy( b, a);
	cout << b<<endl;*/
	StrCat(a, b);
	cout << a<<endl;
}

int StrLen(const char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		str++;
		count++;
	}
	return count;
}

void StrCopy(char* str2, const char* str)
{
	int i = 0;
	for (; i < StrLen(str); i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
}
void StrCat(char* str, const char* str2)
{
	int strcount = StrLen(str);
	for (int i = 0; i <StrLen(str2); i++)
	{
		str[i+ strcount] = str2[i];
	}
}