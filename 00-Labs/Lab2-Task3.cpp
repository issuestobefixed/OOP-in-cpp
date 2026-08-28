#include<iostream>
using namespace std;

int multilpyByFactor(int *p1, int factor)
{
	int result = *p1 * factor;
	return result;
}

int main()
{
	int num=0, factor=0;
	cout << "Enter a Number : " << num;
	cin >> num;
	cout << "Enter a Factor : " << factor;
	cin >> factor;
	cout << "Before : " << num << endl;

	cout<<"After : "<<multilpyByFactor(&num, factor)<<endl;
	return 0;
}