#include <iostream>
using namespace std;
class Parent
{
public:
    Parent()
    {
        cout << "Constructor of Parent" << endl;
    }
    ~Parent()
    {
        cout << "Destructor of Parent" << endl;
    }
    void display()
    {
        cout << "Display of Parent" << endl;
    }
};
class Child1 : public Parent
{
public:
    Child1()
    {
        cout << "Constructor of Child1" << endl;
    }
    ~Child1()
    {
        cout << "Destructor of Child1" << endl;
    }
    void display()
    {
        cout << "Display of Child1" << endl;
    }
};
class Child2 : public Parent
{
public:
    Child2()
    {
        cout << "Constructor of Child2" << endl;
    }
    ~Child2()
    {
        cout << "Destructor of Child2" << endl;
    }
    void display()
    {
        cout << "Display of Child2" << endl;
    }
};
int main()
{

    Child1 c1,c2;
    Child2 c3,c4;
    c1.display();

    return 0;
}