#include<iostream>
using namespace std;
int main()
{
	float x = 1.1, y = 2.2, z = 3.3;
	float* p1 = &x;
	cout << "Value of pointer pointing to x : " << *p1<<endl;
	p1 = &y;
	cout << "Value of pointer pointing to y : " << *p1<<endl;
	p1 = &z;
	cout << "Value of pointer pointing to z : " << *p1<<endl;
	p1 = &x;
	*p1 += 4;
	cout << "Value of pointer pointing to x (After Modification) : " << *p1 << endl;
	p1 = &y;
	*p1 += 4;
	cout << "Value of pointer pointing to y (After Modification) : " << *p1 << endl;
	p1 = &z;
	*p1 += 4;
	cout << "Value of pointer pointing to z (After Modification) : " << *p1 << endl;
	return 0;
}