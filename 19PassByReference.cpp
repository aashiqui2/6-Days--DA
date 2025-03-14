#include <iostream>
using namespace std;
// void swap(int* ,int*);
void swap(int &, int &);
int main()
{
    int a = 20;
    int b = 30;
    cout << "Before swap" << endl;
    cout << a << endl;
    cout << b << endl;
    //   swap(&a,&b);
    swap(a, b);
    cout << "After swap" << endl;
    cout << a << endl;
    cout << b << endl;
    return 0;
}
/*
void swap(int *n1,int *n2)
{
    int temp=*n1;//20
    *n1=*n2;//30
    *n2=temp;//20
} */
void swap(int &n1, int &n2)
{
    int temp = n1; // 20
    n1 = n2;       // 30
    n2 = temp;     // 20
}