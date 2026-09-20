#include<iostream>
using namespace std;
char c[][6]={"Exam", "Done", "OOPSI", "Crazy"};
char (*cp[])[6]={c+1, c+3, c, c+2};
char (**cpp)[6]=cp+1;
int main()
{
    cout<<*((*cpp)[-1]+4)<<endl;
    cout<<*(cpp[-1])-4<<endl;
    cout<<**cpp<<endl;
    (*(cp[3]))[5]='.';
    cout<<**((cpp+2))<<endl;
    return 0;
}