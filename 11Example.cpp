#include <iostream>
using namespace std;
int main()
{
    //    char c[]={'h','e','l','l','o','\0'};

    //    char *c="hello";

    char const *c = "hello";

    // *c="world";//we cannot chnage its value
    c="world";//we can change its address

    cout<<c<<endl;//world
    cout<<*c<<endl;//w
    cout<<c+1<<endl;//orld
    cout<<*(c+1)<<endl;//o



    return 0;
}