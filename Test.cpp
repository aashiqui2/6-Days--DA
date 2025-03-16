/* #include <iostream>
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
} */

/* #include <iostream>
using namespace std;
const double PI{3.1415926535897932384626433832795};
class Circle
{
private:
    double radius;

public:
   Circle(double r)
   {
    radius=r;
   }
   double get_Area()
   {
    return PI*radius *radius;
   }
};
int main()
{
    double d;
    cin>>d;
    Circle c(d);
    cout<<c.get_Area();

    return 0;
} */

// #include <iostream>
// using namespace std;
// class College
// {
// public:
//     static const char* clgname;
//     static const int year=2014;
//     string dept[4];
//     College()
//     {
//         for(int i=0;i<4;i++)
//         {
//             cin>>dept[i];
//         }
//     }
//     void display_dept()
//     {
//         for(int i=0;i<4;i++)
//         {
//             cout<<"The dept are "<<dept[i]<<endl;
//         }
//     }
// };
// const char* College::clgname="DACE";
// int main()
// {
//     College c;
//     cout<<College::clgname;
//     c.display_dept();

//     return 0;
// }

#include <iostream>
using namespace std;
/* class Parent
{
public:
    void display()
    {
        cout << "hi from parent" << endl;
    }
};
class child : public Parent
{
public:
    void show()
    {
        cout << "Hello from child" << endl;
    }
}; */

/* class Parent1{};
class Parent2{};
class child:public Parent1,public Parent2{
}; */

/*
class GrandFather{};
class Father:public GrandFather{};
class Child:public Father{}; */

/* class Parent{};
class child1:public Parent{};
class child2:public Parent{}; */

class A{
public:
    void funcA()
    {
        cout << "Function of A" << endl;
    }
};

// class B : public A
class B :virtual public A
{
public:
    void funcB()
    {
        cout << "Function of B" << endl;
    }
};

// class C : public A
class C : virtual public A
{
public:
    void funcC()
    {
        cout << "Function of C" << endl;
    }
};

class D : public B, public C
{ // Inherits from both B and C
public:
    void funcD()
    {
        cout << "Function of D" << endl;
    }
};
// combination of single,hierachical,multiple
int main()
{
    D obj;
    obj.funcA();//ambiguous
    return 0;
}