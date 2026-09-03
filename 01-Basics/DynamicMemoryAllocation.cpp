#include<iostream>
using namespace std;
void adder(int **arr1, int **arr2, int rows, int coloumns)
{
    int **arr3=new int *[rows];
    for(int i=0;i<rows;i++)
    {
        arr3[i]=new int [coloumns];
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    cout<<"Final matrix after addition : "<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++)
    {
        delete[] arr3[i];
    }

    delete[] arr3;
}
int main()
{
    int rows=0, coloumns=0;
    cout<<"Enter rows of matrix : ";
    cin>>rows;
    cout<<"Enter coloumns of  matrix : ";
    cin>>coloumns;

    int **arr1=new int *[rows];
    for(int i=0;i<rows;i++)
    {
        arr1[i]=new int [coloumns];
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"] of Matrix 1: ";
            cin>>arr1[i][j];
        }
    }

    cout<<endl;
    cout<<"Matrix 1 : "<<endl;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    int **arr2=new int *[rows];
    for(int i=0;i<rows;i++)
    {
        arr2[i]=new int [coloumns];
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<coloumns;j++)
        {
            cout<<"Enter ["<<i<<"]["<<j<<"] : ";
            cin>>arr2[i][j];
        }
    }

    cout<<endl;
    cout<<"Matrix 2 : "<<endl;

    for(int i=0;i<rows;i++)
    { 
        for(int j=0;j<coloumns;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    
    adder(arr1,arr2,rows,coloumns);

    for(int i=0;i<rows;i++)
    {
        delete[] arr1[i];
    }

    delete[] arr1;

    for(int i=0;i<rows;i++)
    {
        delete[] arr2[i];
    }

    delete[] arr2;
    return 0;
}