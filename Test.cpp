#include <iostream>
using namespace std;
class Test
{
private:
    int *data;

public: 
Test()
{
    data=new int;
    *data=30;
    cout<<"memory setted"<<endl;
}
~Test()
{
    delete data;
}
int getdata()
{
    return *data;
}
};
int main()
{
    Test t;
    cout<<t.getdata();
    cout<<t.getdata();


    return 0;
}