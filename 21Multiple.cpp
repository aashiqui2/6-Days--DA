#include<iostream>
using namespace std;
 class  Parent1{
    public:
    void display(){
        cout<<"Display of Parent"<<endl;
    }
};
class Parent2{
    public:
    void display(){
        cout<<"Display of Parent"<<endl;
    }
};
class Child: public  Parent1, public Parent2{
    public:
    void display(){
        cout<<"Display of Child"<<endl;
    }
};
int main()
{
    Child c1;
    c1.display();//"Child::display" is ambiguous C
    // c1.Parent1::display();
    // c1.Parent2::display();

return 0;
}