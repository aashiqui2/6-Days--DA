#include <iostream>
using namespace std;
int main()
{
    int a[] {1, 2, 3, 4, 5};
    char c[]={'h','e','l','l','o','\0'};
    char str[][7]={"ram","gopal","kumar","ashifa"} ;

    cout<<str<<endl;//address
    cout<<str[0]<<endl;//ram
    cout<<str[0]+1<<endl;//am
    cout<<*str<<endl;//ram
    cout<<*str+1<<endl;//am
    cout<<*(str+1)<<endl;//gopal
    return 0;
}