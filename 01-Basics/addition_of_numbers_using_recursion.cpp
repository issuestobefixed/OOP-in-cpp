#include<iostream>
using namespace std;
int sum(int x)
{
    if(x==0)
    {
        return 0;
    }
    else
    {
        return x + sum(x-1);
    }
}
int main()
{
    int x=0;
    cout<<"Enter a number up to which you want the sum : ";
    cin>>x;
    cout<<"Sum : "<<sum(x);
    return 0;
}