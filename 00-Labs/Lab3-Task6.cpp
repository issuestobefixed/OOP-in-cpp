#include<iostream>
using namespace std;
int main()
{
	int arr[3][3] = {};
	int* ptr = &arr[0][0];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Enter [" << i << "][" << j << "] element : ";
			cin >> *(ptr + i * 3 + j);
		}
	}
	cout << "Matrix printed through pointer :" << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout<< *(ptr + i * 3 + j);
		}
		cout << endl;
	}
	return 0;
}