#include<iostream>
using namespace std;
int main()
{
	char str[] = "Mutable";
	char* p = str;
	for (int i = 0; i < 7; i++)
	{
		cout << str[i];
	}
	cout << endl;
	cout << "Enter what to replace with : ";
	for (int i = 0; i < 4; i++)
	{
		cin >> *(p + i);
	}
	for (int i = 0; i < 4; i++)
	{
		cout << *(p + i);
	}
	cout << endl;
	return 0;
}