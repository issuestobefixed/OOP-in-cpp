#include<iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int num)
{
    if(left>right)
    {
        return -1;
    }

    int mid=(left+right)/2;
    if(arr[mid]==num)
    {
        return mid;
    }
    else if(num<arr[mid])
    {
        return binarySearch(arr, left, mid-1, num);
    }
    else if(num>arr[mid])
    {
        return binarySearch(arr, mid+1, right, num);
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6}, num;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the number to find its index : ";
    cin>>num;

    int result=binarySearch(arr,0,5,num);

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