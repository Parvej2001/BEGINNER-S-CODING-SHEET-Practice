// 13) Write a Program to Check Whether a Number is Prime or Not
#include <iostream>
using namespace std;
int main()
{
    int num;
    bool isNotPrime;
    cout << "Enter number :";
    cin >> num;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            isNotPrime = true;
        }
    }
    
    if (isNotPrime)
    {
        cout << "Its not a prime number.";
    }
    else
    {
        cout << "Its a prime number.";
    }

    return 0;
}