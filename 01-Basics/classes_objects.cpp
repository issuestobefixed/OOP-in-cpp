#include<iostream>
using namespace std;

class Car
{
    public:
    string make, model;
    int year;

    void displayinfo()
    {
        cout<<make<<" "<<model<<" "<<year<<endl;
    }
};

int main()
{
    Car c1;
    c1.make="BMW";
    c1.model="5 Series";
    c1.year=2026;
    c1.displayinfo();

    Car c2;
    c2.make="Audi";
    c2.model="S8";
    c2.year=2024;
    c2.displayinfo();

    return 0;
}