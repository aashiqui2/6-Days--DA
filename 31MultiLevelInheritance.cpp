#include <iostream>
using namespace std;
class GrandParent
{
protected:
    int a = 10;

public:
    int b = 20;

private:
    int c = 30;
};
class Parent : public GrandParent
{
protected:
    int d = 40;

public:
    int e = 50;

private:
    int f = 60;
};
class Child : public Parent
{
protected:
    int g = 70;

public:
    int h = 80;

private:
    int i = 90;
};
int main()
{
    Child c1;
    cout << "b is " <<c1.b << endl;
    cout << "e is " <<c1.e << endl;
    cout << "h is " <<c1.h << endl;

    return 0;
}