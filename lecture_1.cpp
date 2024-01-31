#include<iostream>
using namespace std;

int main()
{
    int a = 6;
    int *p;  // declaring a poitner variable p of type integer
    p = &a;   // p = address of a 
    cout<<p<<endl;  // address of a
    cout<<a<<endl;  // 6
    *p = 5;   // value at address which is stored in p
    cout<<*p<<endl;  // 5

}