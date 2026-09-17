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
            cout<<"============================"<<endl;
        }
    };

    Student s[3];

    for(int i=0;i<3;i++)
    {
        cout<<"Enter "<<i<<" student's name : ";
        cin>>s[i].name;
        cout<<"Enter "<<i<<" student's GPA  : ";
        cin>>s[i].GPA;
        cout<<"Enter "<<i<<" student's age  : ";
        cin>>s[i].age;
    }

    s[0].print(s[0]);
    s[0].print(s[1]);
    s[0].print(s[2]);

    return 0;
}