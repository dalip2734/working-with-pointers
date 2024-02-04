// Pointer types , void pointer , pointer arithmetic
// Lecture_3

#include<iostream>
using namespace std;

int main ()
{
    int a = 1025;
    int *p ;
    p = &a ;
    cout << "Size of Integers = " <<sizeof(int)<<endl;
    cout<<"Address = "<<p<<"\nValue ="<<*p<<endl;
    char *p0;
    p0 = (char*)p;  //typeCasting
    cout<< "Size of char = "<<sizeof(char)<<endl;
    cout<<"Address = "<<p0+1<<"\nValue ="<<*(p0+1);
}
