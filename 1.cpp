#include<iostream>
using namespace std;
const double PI{3.1415926535897932384626433832795};
class Circle
{
private:
    double radius;
public:
    Circle(double r):radius(r){};
    double get_Area()
    {
        return PI*radius *radius;
    }
    friend void display(Circle c);
};
void display(Circle c)
{
    cout<<c.radius<<endl;
}
int main()
{
    Circle c1(10);
    cout<<c1.get_Area()<<endl;
    display(c1);
return 0;
}