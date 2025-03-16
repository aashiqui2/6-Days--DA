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

class Child : public Parent
{
public:
    Child()
    {
        cout << "Constructor of Child" << endl;
    }
    ~Child()
    {
        cout << "Destructor of Child" << endl;
    }
    void display()
    {
        cout << "Display of Child" << endl;
    }
    void show()
    {
        cout << "Show of Child" << endl;
    }
};
int main()
{
    Child c1;
    c1.display();
    c1.show();

    return 0;
}