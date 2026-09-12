#include<iostream>
using namespace std;

int reverseInt(int x, int rev=0)
{
	if (x==0)
	{
		return rev;
	}
		return reverseInt(x / 10 , rev * 10 + x % 10);
	
}
int main()
{
	int x = 12345;
	cout << "Original Number : " << x << endl;
	cout << "Reversed Number : " << reverseInt(x) << endl;
	return 0;
}