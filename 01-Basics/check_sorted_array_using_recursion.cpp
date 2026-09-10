#include<iostream>
using namespace std;

bool sorted(int arr[], int size)
{
    if(size == 1)
    {
        return true;
    }

    if(arr[size - 1] < arr[size - 2])
    {
        return false;
    }

    return sorted(arr, size - 1);
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

    if(sorted(arr,5))
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
}