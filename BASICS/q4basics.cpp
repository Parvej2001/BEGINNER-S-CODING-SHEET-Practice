// Write a program where the user is asked to enter two
// integers (divisor and dividend) and the quotient and the
// remainder of their division is computed.(Both divisor and
// dividend should be integers.)

#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter num 1:";
    cin>>num1;
    cout<<"Enter num 2:";
    cin>>num2;
    cout<<"Quotient is :"<<num1/num2<<endl;
    cout<<"Remainder is :"<<num1%num2;
    
}
//OUTPUT:
// Enter num 1:45
// Enter num 2:7
// Quotient is :6
// Remainder is :3