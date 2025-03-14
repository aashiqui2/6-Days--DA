#include<iostream>
using namespace std;
int main()
{
    int a[]{1,2,3,4,5};
    int b[]{6,7,8,9,10};
    int *p1{a};
    int *p2{b};

    int *temp=p1;
    p1=p2;
    p2=temp;
    for(int i=0;i<5;i++)
    {
        cout<<*(p1+i)<<" ";
    }
    for(int i=0;i<5;i++)
    {
        cout<<p1[i]<<" ";
    }
return 0;
}