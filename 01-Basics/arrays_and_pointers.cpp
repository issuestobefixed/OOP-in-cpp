#include<iostream>
using namespace std;

void adder(int *ptr1, int *ptr2)
{
    int arr3[2][2]={};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            arr3[i][j]=*ptr1+*ptr2;
            ptr1++;
            ptr2++;
        }
    }
    cout<<"Final matrix after addition : "<<endl;
    int *ptr3=&arr3[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<*(ptr3+i*2+j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr1[2][2]={};
    int arr2[2][2]={};
    int *ptr1=&arr1[0][0];
    int *ptr2=&arr2[0][0];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter element ["<<i<<"]["<<j<<"] of array 1 : ";
            cin>>*ptr1;
            ptr1++;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<"Enter element ["<<i<<"]["<<j<<"] of array 2 : ";
            cin>>*ptr2;
            ptr2++;
        }
    }

    // Reset pointers
    ptr1 = &arr1[0][0];
    ptr2 = &arr2[0][0];

    cout<<"Matrix 1 : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<*(ptr1+i*2+j)<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix 2 : "<<endl;
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<*(ptr2+i*2+j)<<" ";
        }
        cout<<endl;
    }

    adder(ptr1,ptr2);
    return 0;
}