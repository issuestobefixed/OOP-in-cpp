#include<iostream>
using namespace std;
class Student
{
    public:
    int value;
    void setValue(int v)
    {
        value=v;
    }
    Student operator+(Student obj)
    {
        Student temp;
        temp.value=value+obj.value;
        return temp;
    }
    void display()
    {
        cout<<value<<endl;
    }
};
int main()
{
    Student s1, s2, sum;
    s1.setValue(10);
    s2.setValue(20);
    sum=s1+s2;
    sum.display();
    return 0;
}