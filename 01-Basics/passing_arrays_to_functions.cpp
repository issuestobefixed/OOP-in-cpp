#include<iostream>
using namespace std;
void print(int a[][3])
{
    int *ptr=&a[0][0];
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<*(ptr+i*3+j)<<" ";
        }
        cout<<endl;
    }
}
void printer(int *ptr)
{
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            cout<<*(ptr+i*3+j)<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int ch;
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    cout<<"1. Normal Passing of array?"<<endl;
    cout<<"2. Passing through pointer?"<<endl;
    cout<<"3. want to end program?"<<endl;
    cin>>ch;
    if(ch==1)
    {
        print(arr);
    }
    else if(ch==2)
    {
        printer(&arr[0][0]);
    }
    else if(ch==3)
    {
        return 0;
    }
    else
    {
        cout<<"Invalid Choice"<<endl;
    }
    return 0;
}