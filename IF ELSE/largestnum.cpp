// 3) Write a Program to Find Largest Number Among Three Numbers entered by users

#include <iostream>
using namespace std;
int main()
{
    float num1, num2, num3;
    cout << "Enter three numbers:";
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is greater.";
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is greater.";
    }
    else
    {
        cout << num3 << " is greater.";
    }
    return 0;
}