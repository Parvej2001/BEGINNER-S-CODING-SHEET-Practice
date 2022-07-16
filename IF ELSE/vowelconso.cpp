// 2) Write a Program to Check Whether a Character is Vowel or Consonant.
#include <iostream>
using namespace std;
int main()
{
    char c;
    bool islowercase, isuppercase;
    cout << "Enter the Alphabet : ";
    cin >> c;
    // checking the lower and uppercase
    islowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    isuppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (!isalpha(c))
    {
        cout << "erro ! Not an Alphabet .";
    }
    else if (islowercase || isuppercase)
    {
        cout << c << " is Vowel.";
    }
    else
    {
        cout << c << " is consonant.";
    }
    return 0;
}