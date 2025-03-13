#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    const unsigned char mask_bit_0 {0b00000001} ;//Bit0//1
    const unsigned char mask_bit_1 {0b00000010} ;//Bit1//2
    const unsigned char mask_bit_2 {0b00000100} ;//Bit2//4
    const unsigned char mask_bit_3 {0b00001000} ;//Bit3//8
    const unsigned char mask_bit_4 {0b00010000} ;//Bit4//16
    const unsigned char mask_bit_5 {0b00100000} ;//Bit5//32
    const unsigned char mask_bit_6 {0b01000000} ;//Bit6//64
    const unsigned char mask_bit_7 {0b10000000} ;//Bit7//128
    
    //Sandbox variable
    unsigned char var {0b00000000};
    cout<<bitset<8>(var)<<endl;

    cout<<"changing position 0"<<endl;
    var=var|mask_bit_0;
    cout<<bitset<8>(var)<<endl;

    cout<<"changing position 3"<<endl;
    var=var|mask_bit_3;
    cout<<bitset<8>(var)<<endl;

    cout<<"changing position 5 & 7"<<endl;
    var=var|(mask_bit_5|mask_bit_7);
    cout<<bitset<8>(var)<<endl;

    cout<<"changing position 0 to ->0"<<endl;
    var=var&(~mask_bit_0);
    cout<<bitset<8>(var)<<endl;

    cout<<"changing position 0 to ->0"<<endl;
    var=var&~(mask_bit_3|mask_bit_5|mask_bit_7);
    cout<<bitset<8>(var)<<endl;

    // cout<<"flip all those bits bit to 1"<<endl;
    // cout<<bitset<8>(~var)<<endl;

    var=var|(mask_bit_0| mask_bit_2|mask_bit_4|mask_bit_6);
    cout<<bitset<8>(var)<<endl;

    cout<<"flip all those bits bit to 1"<<endl;
    cout<<bitset<8>(~var)<<endl;

    /* cout<<"flip those bits"<<endl;
    var=var^(mask_bit_1|mask_bit_3|mask_bit_5|mask_bit_7);
    cout<<bitset<8>(var)<<endl; */


return 0;
}