#include<iostream>
using namespace std;
int main() {
    int n = 0;
    cout << "Number of strings : ";
    cin >> n;

    char** strings = new char* [n];

    for (int i = 0; i < n; i++) 
    {
        strings[i] = new char[100];
        cout << "Enter string " << i << " : ";
        cin >> strings[i];
    }

    cout << endl;
    cout << "Strings entered : " << endl;

    for (int i = 0; i < n; i++) 
    {
        cout << strings[i] << endl;
    }

    for (int i = 0; i < n; i++) 
    {
        delete[] strings[i];
    }
    delete[] strings;

    return 0;
}