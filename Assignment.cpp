#include <iostream>
using namespace std;

class College
{
private:
    int fees;

public:
    string name;
    string location;
    string course;
    int year;
    string str[5];
    College()
    {
        name = " ";
        location = " ";
        course = " ";
        year = 0;
        cout << "CONSTRUCTOR CALLED" << endl;
    }
    College(string n, string l, string c, int y, string s[]);
    void input()
    {
        cout << "Enter the name of the college: ";
        cin >> name;
        cout << "Enter the location of the college: ";
        cin >> location;
        cout << "Enter the course: ";
        cin >> course;
        cout << "Enter the year: ";
        cin >> year;
        cout << "Enter the Department: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> str[i];
        }
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Location: " << location << endl;
        cout << "Course: " << course << endl;
        cout << "Year: " << year << endl;
        cout << "The Department are: ";
        for (int i = 0; i < 5; i++)
        {
            cout << str[i] << endl;
        }
    }
    void payfees(int fee = 10000)
    {
        fees = fee;
    }

    int getfees()//getter function
    {
        return fees;
    }

    friend void get_Fees(College &c);//friend function

    void Admission();

    ~College()
    {
        cout << "Destructor called" << endl;
    }
};
void get_Fees(College &c)
{
    cout << "The fees is : " << c.fees << endl;
}
void College::Admission()
{
    cout << "Admission is open for the year " << year << endl;
}

College::College(string n, string l, string c, int y, string s[])
{
    name = n;
    location = l;
    course = c;
    year = y;
    cout << "Enter the Department: ";
    for (int i = 0; i < 5; i++)
    {
        str[i] = s[i];
    }
}
int main()
{
    {
        /*  College c1;
         c1.input();
         c1.display();
         c1.Admission(); */
        string s[5] = {"CSE", "ECE", "EEE", "MECH", "CIVIL"};
        College c2("DACE", "Chennai", "B.E", 2025, s);
        c2.display();
        // c2.payfees();
        // cout<<"The fees is :"<<c2.getfees()<<endl;
        c2.payfees(20000);
        // cout<<"The fees is :"<<c2.getfees()<<endl;
        get_Fees(c2);
    }
    cout << "Program Ends  " << endl;

    return 0;
}