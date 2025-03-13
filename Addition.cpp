#include <iostream>
using namespace std;
int main()
{
#ifndef Online_Judge
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
    /* int a{}, b{};
    cin>>a>>b;
    cout<<a+b; */
    string name;
    // cin>>name;
    getline(cin,name);
    cout<<name;
    return 0;
}