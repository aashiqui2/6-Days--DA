#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a{2};
    char c{'e'};
    float f{2.3444f};
    double d{3.14};
    wchar_t c1{'z'};
    bool b{false};
    auto g{9};

    cout<<a<<endl;
    cout<<c<<endl;
    cout<<f<<endl;
    cout<<d<<endl;
    cout<<c1<<endl;
    cout<<boolalpha;
    cout<<b<<endl;
    cout<<g<<endl;

    float f1{19.268973872990290};
    cout<<setprecision(3)<<f1;

    return 0;
}