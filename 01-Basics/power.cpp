#include<iostream>
using namespace std;
int power(int x, int pow)
{
    if(pow==0)
    {
        return 1;
    }
    else
    {
        return x * power(x, pow-1);
    }
}
int main()
{
    int x=0, pow=0;
    cout<<"Enter Number : ";
    cin>>x;
    cout<<"Enter Power : ";
    cin>>pow;
    cout<<"Result : "<<power(x, pow);
}