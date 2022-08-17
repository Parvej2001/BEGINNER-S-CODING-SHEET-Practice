// 4) Write a Program to Display Fibonacci Series upto nth term (n is entered by user)
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1;
    cout << "Enter you number: ";
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 1; i <= n; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }
    return 0;
}