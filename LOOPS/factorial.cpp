// 1) Write a Program to Calculate Sum of first N Natural
// Numbers (here value of N is Entered by user)
#include <iostream>
using namespace std;
int main()
{
    int num;
    long double fact = 1.0;
    cout << "Enter A positive Number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Error! Factorial of a negative number doesn't exist.";
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of given number is:" << fact;
    }
    return 0;
}