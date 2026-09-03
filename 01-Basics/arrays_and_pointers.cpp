#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *ptr=&arr[0][0];
    int *ptr2=&arr2[0][0];
    int arr3[3][3]={};
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            arr3[i][j]=*ptr+*ptr2;
            ptr++;
            ptr2++;
        }
        cout<<endl;
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}