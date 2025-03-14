#include <iostream>
using namespace std;

// struct Employee
// {
//     int empId;
//     char *name; // members
// };
class Employee // class
{
    // public:,private: protected: //access specifier
public:
    int empid;
    string empname;
    int empsalary;//members
};
int main()
{
    Employee emp; // object
    emp.empid=21;
    emp.empsalary=20000;
    emp.empname="ashok";
    cout<<emp.empid<<endl;
    cout<<emp.empsalary<<endl;
    cout<<emp.empname<<endl;
    return 0;
}