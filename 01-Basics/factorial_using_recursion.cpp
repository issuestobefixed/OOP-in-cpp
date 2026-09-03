#include<iostream>
using namespace std;
int factorial(int input)
{
    if(input==0 || input==1)
    {
        return 1;
    }
    else
    {
        return input*factorial(input-1);
    }
}
int main()
{
    int input=0;
    cout<<"Enter an integer to calculate its factorial : ";
    cin>>input;
    cout<<"Factorial : "<<factorial(input);
    return 0;
}