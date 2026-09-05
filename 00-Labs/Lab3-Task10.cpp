#include<iostream>
using namespace std;
int callback(int a)
{
	for (int i = 1; i <= 3; i++)
	{
		cout << "Callback " << i << " executed." << endl;
	}
	return 0;
}
int main()
{
	cout << "Event occured" << endl;
	int(*funcptr1)(int) = callback ;
	cout << funcptr1(3) << endl;
	return 0;
}