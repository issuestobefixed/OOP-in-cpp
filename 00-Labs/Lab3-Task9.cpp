#include<iostream>
using namespace std;
int main()
{
	int** arr = new int* [4];
	for (int i = 0; i < 4; i++)
	{
		arr[i] = new int[4];
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Enter [" << i << "][" << j << "] element : ";
			cin >> arr[i][j];
		}
	}
	cout << endl;
	cout << "Original matrix : " << endl;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<< arr[i][j];
		}
		cout << endl;
	}
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr[i][j] != 0)
			{
				cout << "(" << i << ", " << j << "): " << arr[i][j]<<endl;
			}
		}
	}
	for (int i = 0; i < 4; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}