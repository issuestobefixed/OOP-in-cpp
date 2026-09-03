#include<iostream>
using namespace std;
int fibonacci(int input)
{
    if(input==0)
    {
        return 0;
    }
    if(input==1)
    {
        return 1;
    }
    return fibonacci(input-1)+fibonacci(input-2);
}
int main()
{
    int input=0;
    cout<<"Enter a number to which you want to calculate the Fibonacci series : ";
    cin>>input;
    cout<<fibonacci(input)<<" ";
    return 0;
}