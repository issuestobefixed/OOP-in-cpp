#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
	if(n == 0)
	{
		return -1;
	}
	
	cout << "Checking index " << n-1 <<endl ;
	if(arr[n - 1] == target)
	{
		cout << "Target found at index : " << n-1 <<endl;
		return n - 1;
	}
	return linearSearch(arr, n - 1, target);
}

int main()
{
	int arr[5] = {};

	for (int i = 0;i < 5;i++)
	{
		cout << "Enter (integer only) " << i << " : ";
		cin >> arr[i];
	}
	cout << "Recieved Array : ";
	for (int i = 0;i < 5;i++)
	{
		cout<< arr[i]<<" ";
	}
	cout << endl;
	int target = 0;
	cout << "Enter target : ";
	cin >> target;

	linearSearch(arr, 5, target);
	return 0;
}