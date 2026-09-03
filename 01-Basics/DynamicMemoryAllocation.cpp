#include<iostream>
using namespace std;
int main()
{
    int rows=0, coloumns=0;
    cout<<"Enter rows of matrix : ";
    cin>>rows;
    cout<<"Enter coloumns of  matrix : ";
    cin>>coloumns;

    int **arr=new int *[rows];
    for(int i=0;i<rows;i++)
    {
        arr[i]=new int [coloumns];
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    cout<<"Matrix : "<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++)
    {
        delete[] arr[i];
    }

    delete[] arr;
    return 0;
}