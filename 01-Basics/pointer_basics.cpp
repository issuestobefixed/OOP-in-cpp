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

    //pointers and arrays

    int arr[]={10, 20, 30};
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Address of first element of array : "<<arr<<endl;      // Address of first element
    cout<<"First element of array : "<<*arr<<endl;                // 10
    cout<<"Second element of array : "<<*(arr+1)<<endl;           // 20
    cout<<"Third element of array : "<<*(arr+2)<<endl;            // 30

    int *p2=arr;
    cout<<"First element of array through pointer p2 : "<<*p2<<endl;
    p2++;
    cout<<"Second element of array through pointer p2 : "<<*p2<<endl;
    p2++;
    cout<<"Third element of array through pointer p2 : "<<*p2<<endl;
    
    return 0;
}