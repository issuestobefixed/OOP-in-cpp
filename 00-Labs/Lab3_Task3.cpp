#include<iostream>
using namespace std;
void check(int *ptr)
{
	if (*ptr == 0)
	{
		cout << "Error: Null pointer detected"<<endl;
	}
	else
	{
		cout << "Safe call" << endl;
	}
}
int main()
{
	int x = 0;
	cout << "Enter a value : ";
	cin >> x;
	int* ptr = &x;
	check(ptr);
	return 0;
}