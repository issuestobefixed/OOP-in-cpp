#include<iostream>
using namespace std;
int main()
{
	int score = 85;
	int* marks = &score;

	cout << "Value of score : " << score << ", Address of score : " << &score << endl;
	cout << "Value of marks : " << *marks << ", Address of marks : " << marks << endl;

	*marks += 15;

	cout << "Value of score : " << score << ", Address of score : " << &score << endl;
	cout << "Value of marks : " << *marks << ", Address of marks : " << marks << endl;
	return 0;
}