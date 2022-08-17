//10) Write a Program to Calculate Power of a Number
//using inbuilt pow() function by taking two inputs from
//users as Base and exponent respectively

#include <iostream>
using namespace std;
#include<math.h> 
int main(){
    int base, exponent;
    cout<<"Enter base and Exponent: ";
    cin>>base>>exponent;

    cout<<"Power of given number is: "<<pow(base,exponent);
}