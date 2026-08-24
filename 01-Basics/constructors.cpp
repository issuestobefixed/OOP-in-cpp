#include<iostream>
using namespace std;

class Car
{
    public:
    string make, model;
    int year;

    Car(string a, string b, int c)
    {
        make=a;
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
    string make, model;
    int year;

    Car c1("BMW", "5 series", 2023);

    cout<<"Enter car make : ";
    cin>>make;
    cout<<"Enter car model : ";
    cin>>model;
    cout<<"Enter car model year : ";
    cin>>year;

    Car c2(make, model, year);
    c2.print();
    c1.print();

    Car c3("Mercedes", "S-Class", 2024);
    c3.print();

    Car c4("Mercedes", "E-Class", 2024);
    c4.print();
    
    return 0;
}