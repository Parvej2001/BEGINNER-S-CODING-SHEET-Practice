// 6) Write a Program to Swap Two Numbers
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
    cout << "Enter num 1:";
    cin >> num1;
    cout << "Enter num 2:";
    cin >> num2;
    cout << "before swaping num1 and num2 is :" << num1<<" "<< num2<<endl;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swaping num1 and num2 is :" << num1<<" "<< num2;
}
//output
// Enter num 1: 21
// Enter num 2:43
// before swaping num1 and num2 is :21 43
// After swaping num1 and num2 is :43 21