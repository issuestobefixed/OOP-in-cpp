#include<iostream>
using namespace std;
int main()
{
    int size=0;
    cout<<"Enter size of array : ";
    cin>>size;

    int *arr=new int [size];

    for(int i=0;i<size;i++)
    {
        cout<<"Enter "<<i<<" element : ";
        cin>>arr[i];
    }

    cout<<endl;
    cout<<"Array : ";

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}