#include<iostream>
using namespace std;

class Car
{
    public:
    string make, model;
    int year;

    void print()
    {
        cout<<"Make : "<<make<<" Model : "<<model<<" Year : "<<year<<endl;
    }
};

int main()
{
    Car c1;
    cout<<"Enter make of first car (BMW, Audi etc) : ";
    cin>>c1.make;
    cout<<"Enter model of first car (530i, S8 etc) : ";
    cin>>c1.model;
    cout<<"Enter year of first car (2022, 2026 etc) :";
    cin>>c1.year;
    c1.print();
    Car c2;
    cout<<"Enter make of second car (BMW, Audi etc) : ";
    cin>>c2.make;
    cout<<"Enter model of second car (530i, S8 etc) : ";
    cin>>c2.model;
    cout<<"Enter year of second car (2022, 2026 etc) :";
    cin>>c2.year;
    c2.print();

    return 0;
}