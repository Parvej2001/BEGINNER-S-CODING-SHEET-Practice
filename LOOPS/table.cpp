// 3) Write a Program to Generate Multiplication Table of a
// number (entered by the user) using a for loop.
#include <iostream>
using namespace std;
int main()
{
    int num, table;
    cout << "Enter the number :";
    cin >> num;
    if (num < 0)
    {
        cout << "Error ! please enter positive number.";
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {
            table = num * i;
            cout << num << " * " << i << " = " << table << endl;
        }
    }

    return 0;
}