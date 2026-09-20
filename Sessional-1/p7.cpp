#include<iostream>
using namespace std;
int frequency(int series, int num)
{
    if(series==0)
    {
        return 0;
    }
    if(series%10==num)
    {
        return 1 + frequency(series/10, num);
    }
    else
    {
        return frequency(series/10, num);
    }
}
int main()
{
    int series, num;
    cout<<"Enter Numbers : ";
    cin>>series;
    cout<<"Enter a number to check frequency : ";
    cin>>num;

    cout<<"Frequency : "<<frequency(series, num)<<endl;
    return 0;
}