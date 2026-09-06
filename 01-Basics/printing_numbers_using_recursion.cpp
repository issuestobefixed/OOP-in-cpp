#include<iostream>
using namespace std;
void print(int x)
{
    if(x==0)
    {
        return;
    }
    else
    {
       cout<<x<<" ";
       print(x-1);
    }
}
int main()
{
    int x=0;
    cout<<"Enter a number : ";
    cin>>x;
    print(x);
    return 0;
}