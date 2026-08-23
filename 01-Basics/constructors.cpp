#include<iostream>
using namespace std;

class Car
{
    public:
    string make, model;
    int year;

    Car(string a, string b, int c)
    {
        make = a;
        model=b;
        year=c;
    }

    void print()
    {
        cout<<"Make : "<<make<<" Model : "<<model<<" Year : "<<year<<endl;
    }
};

int main()
{
    Car c1("BMW", "5 series", 2023);
    c1.print();

    return 0;
}