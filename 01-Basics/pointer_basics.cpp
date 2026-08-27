#include<iostream>
using namespace std;
int main()
{
    int x=10;
    cout<<"Val of x : "<<x<<endl;
    cout<<"Address of x : "<<&x<<endl;

    int *p=&x;       //pointer p storing the address of a variable x
    cout<<"Val of p (storing x address): "<<p<<endl;
    cout<<"Address of p : "<<&p<<endl;
    cout<<"Val at the Address of p i.e dereference : "<<*p<<endl;

    //Modifying val of x using pointer
    
    *p=50;
    cout<<"Val of x : "<<x<<endl;
    cout<<"Val at the Address of p i.e dereference : "<<*p<<endl;

    return 0;
}