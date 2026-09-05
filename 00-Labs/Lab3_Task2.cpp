#include<iostream>
using namespace std;
int main()
{
	int x = 100;
	int& ref1 = x;
	int& ref2 = x;
	cout << "x : " << x<<endl;
	cout << "ref1 : " << ref1<<endl;
	cout << "ref2 : " << ref2<<endl;
	ref1 = 200;
	cout << "After modifying through ref1 : " << endl;
	cout << "x : " << x << endl;
	cout << "ref1 : " << ref1 << endl;
	cout << "ref2 : " << ref2 << endl;
	return 0;
}