#include<iostream>
using namespace std;
class Bank{
    public:
       string ifsc;
       string branch_name;
       int accno;
       int balance;

    private:
      int Pin_No;
public:
    void set(int pinno)
    {
        Pin_No=pinno;
    }
    int get()
    {
        return Pin_No;
    }

};
int main()
{
    Bank person1;
    person1.accno=11479;
    person1.balance=200;
    person1.branch_name="Kodambakam";
    person1.ifsc="ICIC00009";
    person1.set(1000);
    cout<<person1.get();
  
return 0;
}