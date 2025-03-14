#include<iostream>
using namespace std;
void add();//prototype
void add(int ,int);
int add1(); 
int add1(int a,int b);
int main()
{
    add();
    add(2,3);
    cout<<add1();
    cout<<add1(2,3);
return 0;
}

void add()//no return value and arguments
{
    cout<<2+3;
}
void add(int a,int b)//no return value but with argument
{
    cout<<a+b;
}
int add1()//with return and without argument
{
    return 2+3;
}
int add1(int a,int b)//with return and with argument
{
    return a+b;
}