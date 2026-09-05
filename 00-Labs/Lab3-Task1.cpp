#include<iostream>
using namespace std;
int main()
{
	int num = 42;
	int* ptr = &num;
	int& ref = num;

	cout << "Address of num : " << &num<<endl;
	cout << "Address stored in ptr : " << ptr<<endl;
	cout << "Address of ref : " << &ref<<endl;
	return 0;
}