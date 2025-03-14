#include <iostream>
using namespace std;
class Employee
{
    static int count;
    string name;

public:
    Employee()
    {
        cout << " i am default constructor" << endl;
    }
    Employee(string name)
    {
        count++;
        name = name;
    }
    int getcout()
    {
        return Employee::count;
    }
};

int Employee::count = 0;
int main()
{
    Employee e;
    Employee emp("ashok");
    Employee emp1("ashok");
    Employee emp2("ashok");
    
    cout << emp.getcout();

    return 0;
}