#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    // char str[][90] = {
    //     "today you will get reward",
    //     "today you are going to shine",
    //     "you are going to face difficulty",
    //     "meet unexpected person",
    //     "not a good day"};
   const char *str[]={
        "today you will get reward",
            "today you are going to shine",
            "you are going to face difficulty",
            "meet unexpected person",
            "not a good day"
    };
    srand(time(0));

    char name[10];

    int var = rand() % 5;
    cout << "enter your name ";
    cin.getline(name, sizeof(name));
    cout<< "Hi "<<name<<" Today days Prediction "<<str[var];

    return 0;
}