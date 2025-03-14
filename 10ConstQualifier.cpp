#include <iostream>
using namespace std;
int main()
{
    /* int a{10};
    int *p { &a};
    cout<<a<<endl;
    cout<<*p<<endl;

    *p=30;//dereferencing
    cout<<a<<endl;
    cout<<*p<<endl; */

  /*   //! pointer to a Constant Integer
    int a{10};
    int const *p{&a};
    // or  
    // const int *p={&a};
    cout<<a<<endl;
    cout<<*p<<endl;

    // *p=30;//not allowded cannot change the value 
    int b{30};
    p=&b;//we can change its address
    cout<<a<<endl;
    cout<<*p<<endl; */


    //! constant to a pointer
 /*    int a{10};
    int *const p=&a;
    cout<<a<<endl;
    cout<<*p<<endl;

    *p=30;// we can change its value

    int b=20;
    // p=&b; we cannot able to change its address
    cout<<a<<endl;
    cout<<*p<<endl; */


    //! const to a constant pointer 
    /* int a=20;
    const int *const p=&a;

    //*p=30; //we cannot able to change its value
    int b=40;
    //p=&b;// we cannot able to change its value
    cout<<a<<endl;
    cout<<*p<<endl;  */

    return 0;
}