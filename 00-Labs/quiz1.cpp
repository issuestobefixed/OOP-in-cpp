#include<iostream>
using namespace std;
void print_quiz(int n)
{
    if(n<=0)
    {
        return;
    }
    cout<<n;
    print_quiz(n-2);
}
int main()
{
    print_quiz(8);
}