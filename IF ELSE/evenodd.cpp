// 1) Write a Program to Check Whether Number is Even or Odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number :";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is even.";
    }
    else
    {
        cout << num << " is odd.";
    }
}
//OUTPUT
// Enter number :24
// 24 is even.

// Enter number :23
// 23 is odd.