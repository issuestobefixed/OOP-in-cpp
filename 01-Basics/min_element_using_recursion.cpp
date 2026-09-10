#include<iostream>
using namespace std;

int min(int arr[], int size)
{
    if(size == 1)
    {
        return arr[0];
    }

    int minimum = min(arr, size - 1);

    if(arr[size - 1] < minimum)
    {
        return arr[size - 1];
    }
    else
    {
        return minimum;
    }
}

int main()
{
    int arr[5]={};
    for(int i=0;i<5;i++)
    {
        cout<<"Enter "<<i<<" element : ";
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Recieved array : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<"Minimum : "<<min(arr,5);

    return 0;
}