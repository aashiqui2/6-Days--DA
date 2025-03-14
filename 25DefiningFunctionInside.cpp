#include <iostream>
using namespace std;
class Greeting
{
public:
    int peoplecount;
    void sayHello()
    {
        cout<<"Hello To everyOne"<<endl;
    }
    void Welcome();
};
void Greeting::Welcome()
{
    cout<<"say welcome"<<endl;
}
 int main()
{

    Greeting g1;
    g1.peoplecount=20;
    g1.sayHello();
    g1.Welcome();


    return 0;
}