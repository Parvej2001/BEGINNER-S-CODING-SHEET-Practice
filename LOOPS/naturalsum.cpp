// 1) Write a Program to Calculate Sum of first N Natural
// Numbers (here value of N is Entered by user)
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter the positive number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Error ! please enter positive number.";
    }
    else
    {

        for (int i = 1; i <= num; i++)
        {
            sum = sum + i;
        }
        cout << "Sum of the given natural number is :" << sum;
    }
}