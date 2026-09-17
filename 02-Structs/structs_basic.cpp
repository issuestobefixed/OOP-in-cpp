#include<iostream>
using namespace std;
int main()
{
    struct Student
    {
        int age=0;
        float GPA=0;
        string name;

        void print(Student s)
        {
            cout<<"===== Printing Outputs ====="<<endl;
            cout<<"Name : "<<s.name<<endl;
            cout<<"GPA  : "<<s.GPA<<endl;
            cout<<"Age  : "<<s.age<<endl;
        }
    };

    Student s1;

    cout<<"Enter Name : ";
    cin>>s1.name;
    cout<<"Enter GPA  : ";
    cin>>s1.GPA;
    cout<<"Enter Age  : ";
    cin>>s1.age;

    s1.print(s1);
    return 0;
}