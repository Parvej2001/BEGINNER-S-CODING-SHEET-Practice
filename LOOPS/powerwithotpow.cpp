//11) Write a Program to Calculate Power of a Number
//without using inbuilt pow() function by taking two
//inputs from users as Base and exponent respectively

#include <iostream>
using namespace std;
int main(){
    int base, exponent,power=1;
    cout<<"Enter base and Exponent: ";
    cin>>base>>exponent;

    while (exponent!=0)
    {
       power=power*base;
       exponent--;
    }
    cout<<"Power of given number is: "<<power;
}
