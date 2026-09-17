#include<iostream>
using namespace std;
int main()
{
    struct Student
    {
        int age=0;
        float GPA=0;
        string name;
    };

    Student s1{20, 3.12, "Arham"};

    cout<<"Name : "<<s1.name<<endl;
    cout<<"GPA  : "<<s1.GPA<<endl;
    cout<<"Age  : "<<s1.age<<endl;
    return 0;
}