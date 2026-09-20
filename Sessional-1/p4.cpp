#include<iostream>
using namespace std;
struct Record
{
    char *text;
};
void manipulate(Record r, char*p)
{
    r.text=r.text+1;
    *(r.text+1)=*(p+3);
    p=p+2;
    *(p)=*(p-2);
}
int main()
{
    char arr[]={'A', 'B', 'C', 'D', 'E', 'F', 'G', '\0'};

    Record r1, r2;
    r1.text=arr;
    r2.text=r1.text+3;

    char *p1=r1.text+2;
    char *p2=r2.text-1;

    *(p1)=*(p2+2);
    *(r2.text)=*(r1.text+1);

    manipulate(r1, arr);
    r2.text=r1.text+1;
    *(r2.text+2)='\0';
    *(r1.text+5)=*(r1.text);

    cout<<r1.text<<endl;
    cout<<r2.text<<endl;
    return 0;
}