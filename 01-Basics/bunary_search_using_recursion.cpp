#include<iostream>
using namespace std;

int binarysearch(int arr[], int left, int right, int num)
{
    if(left > right)
    {
        return -1;
    }

    int mid = (left + right) / 2;

    if(arr[mid] == num)
    {
        return mid;
    }
    else if(num < arr[mid])
    {
        return binarysearch(arr, left, mid - 1, num);
    }
    else
    {
        return binarysearch(arr, mid + 1, right, num);
    }
}

int main()
{
    // Binary search only works for a sorted array
    int arr[]={1,2,3,4,5};
    int num=0;

    cout<<"Array : ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter number to search : ";
    cin>>num;

    int result=binarysearch(arr,0,4,num);

    if(result==-1)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found at index : "<<result<<endl;
    }
    return 0;
}