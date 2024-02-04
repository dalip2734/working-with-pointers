#include <iostream>
using namespace std;

int main()
{
    // for integer
    int a;
    int *p;
    p = &a;
    // for character
    char c;
    char *v;
    v = &c;

    // Pointer arithmetic

    cout << "Address of p =" << p << endl;
    cout << "size if integer is = " << sizeof(int) << endl;
    cout << "Address p+1 is =" << p + 1 << endl;

    // for chracter pointer
    cout << "Address of v = " << v << endl;
    cout << "size of char =" << sizeof(char) << endl;
    cout << "Address of v+1 =" << v + 1 << endl;
}
