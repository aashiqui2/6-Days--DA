#include <iostream>
using namespace std;
class Demo
{
public:
    Demo()//default no argument constructor
    {
        cout << "hi am default constructor";
    }
    Demo(int c,int d)
    {
        a=c;
        b=d;
    }

public:
    int a;
    int b;
};
int main()
{

    // Demo d1;
    // d1.a = 10;
    // d1.b = 30;
    Demo d1(20,30);
    cout<<d1.a<<d1.b<<endl;
    return 0;
}