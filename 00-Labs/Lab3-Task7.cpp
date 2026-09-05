#include<iostream>
using namespace std;
int square(int num)
{
	return num * num;
}
int cube(int num)
{
	return num * num * num;
}
int fact(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		return num * fact(num - 1);
	}
}
int main()
{
	int(*funcptr1[])(int) = { square, cube, fact };
	for (int i = 0; i < 3; i++)
	{
		cout << funcptr1[i](5) << endl;
	}
	return 0;
}