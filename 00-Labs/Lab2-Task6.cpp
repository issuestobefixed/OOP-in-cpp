#include <iostream>
using namespace std;

int main() 
{
    string facultyMentor = "Mentor";
    string facultyCoordinator = "Coordinator";
    string studentPresident = "President";
    string studentVicePresident = "Vice President";

    string* facultyRolePtr = &facultyMentor;
    string* studentRolePtr = &studentPresident;

    string** facultyPointerToPointer = &facultyRolePtr;
    string** studentPointerToPointer = &studentRolePtr;

    cout << "Default Positions : " << endl;
    cout << "Faculty : " << **facultyPointerToPointer << endl;
    cout << "Student : " << **studentPointerToPointer << endl;

    char category;
    cout << "Enter to change either one (Faculty/Student) : ";
    cin >> category;

    if (category == 'F' || category == 'f') 
    {
        char choice;
        cout << "Enter either to change the role (Mentor/Coordinator) : ";
        cin >> choice;

        if (choice == 'M' || choice == 'm') 
        {
            *facultyPointerToPointer = &facultyMentor;
        }
        else if (choice == 'C' || choice == 'c') 
        {
            *facultyPointerToPointer = &facultyCoordinator;
        }
        else 
        {
            cout << "Invalid role choice for Faculty" << endl;
        }
    }
    else if (category == 'S' || category == 's') 
    {
        char choice;
        cout << "Enter either to change the role (President/VicePresident) : ";
        cin >> choice;

        if (choice == 'P' || choice == 'p') 
        {
            *studentPointerToPointer = &studentPresident;
        }
        else if (choice == 'V' || choice == 'v') 
        {
            *studentPointerToPointer = &studentVicePresident;
        }
        else {
            cout << "Invalid role choice for Student" << endl;
        }
    }
    else 
    {
        cout << "Invalid category selected" << endl;
    }
    cout << "Faculty : " << **facultyPointerToPointer << endl;
    cout << "Student : " << **studentPointerToPointer << endl;
    return 0;
}