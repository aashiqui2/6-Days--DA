#include <iostream>
using namespace std;
int main()
{
    int n{};
    cout<<"enter the number ";
    cin>>n;
    while(n%2==0)
    {
        cout<<2<<" ";
        n=n/2;
    }
    for(int i=3;i<=n/2;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n=n/i;
        }
    }
    if(n>2)
    {
        cout<<n<<" ";
    }
    return 0;
}