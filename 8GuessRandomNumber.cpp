#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    bool istrue = true;
    while (istrue)
    {
        int randomNumber = (rand() % 10) + 1; //[1~10]
        cout<<"Guess the number "<<endl;
        int input{};
        cin>>input;

        if(randomNumber==input){
            cout<<"you won !"<<endl;
            istrue=false;
        }
        else{
            cout<<"try again!"<<endl;
        }
    }


    return 0;
}