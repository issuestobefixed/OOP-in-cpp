#include<iostream>
using namespace std;
struct IntArray
{
    int *arr, size;
    void create(int *ptr, int s)
    {
        size=s;
        arr=ptr;
    }
    void display()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int arr[]={4,2,3,0,1};
    IntArray my_arr;                     // Created an object my_arr to struct IntArray
    my_arr.create(arr+2, 3);

    arr[my_arr.arr[0]]=my_arr.arr[arr[1]];
    arr[arr[3]]=my_arr.arr[arr[1]+my_arr.arr[1]-1];

    my_arr.display();
    
    return 0;
}