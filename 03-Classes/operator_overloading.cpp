#include<iostream>
using namespace std;
class Student
{
    public:
    int marks;
    Student setValue(int v)
    {
        marks=v;
    }
    Student operator + (Student obj)
    {
        Student temp;
        temp.marks=marks+obj.marks;
        return temp;
    }
    void display()
    {
        cout<<marks<<endl;
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