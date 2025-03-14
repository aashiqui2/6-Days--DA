#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &ref = a; // ref is an another name of a
    cout << a << endl;
    cout << ref << endl;
    ref = 20;
    cout << a << endl;
    cout << ref << endl;
    int b = 30;
    // ref = &b;
    ref=b;
    cout << a << endl;
    cout << b << endl;
    cout << ref << endl;
    return 0;
}