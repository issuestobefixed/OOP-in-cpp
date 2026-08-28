#include<iostream>
using namespace std;

void cyclicSwap(int *p1, int *p2, int *p3, int *p4)
{
	int temp = *p4;
	*p4 = *p3;
	*p3 = *p2;
	*p2 = *p1;
	*p1 = temp;
}

int main()
{
	int a = 5, b = 10, c = 15, d = 20;
	cout << "Original : a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;
	
	cyclicSwap(&a, &b, &c, &d);
	cout << "Swap 1   : a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;

	cyclicSwap(&a, &b, &c, &d);
	cout << "Swap 2   : a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;
	return 0;
}