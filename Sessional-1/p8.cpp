#include<iostream>
using namespace std;
bool sorted(int arr[], int size)
{
    if(size==1)
    {
        return true;
    }
    if(arr[size-1]<arr[size-2])
    {
        return false;
    }
    return sorted(arr, size-1);
}
int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={2,3,1,2,3};
    if(sorted(arr1,5))
    {
        cout<<"Array 1 is Sorted"<<endl;
    }
    else
    {
        cout<<"Array 1 is Not Sorted"<<endl;
    }
    if(sorted(arr2,5))
    {
        cout<<"Array 2 is Sorted"<<endl;
    }
    else
    {
        cout<<"Array 2 is Not Sorted"<<endl;
    }
    return 0;
}