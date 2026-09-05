#include<iostream>
using namespace std;
int main()
{
	int x = 10;
	int* ptr = new int;
	*ptr = 10;
	cout << "Address of x (local variable) : " << &x << endl;
	cout << "Address of ptr (DMA variable) : " << ptr << endl;
	return 0;
}