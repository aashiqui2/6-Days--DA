#include<iostream>
#include "Box.h"
using namespace std;
Box::Box(double w)
{
    width = w;
}
void Box::showWidth(){
    cout<<width<<endl;
}