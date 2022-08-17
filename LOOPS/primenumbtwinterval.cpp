//14) Write a Program to Display Prime Numbers Between Two Intervals (entered by user)
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n1,n2;
//     cout << "Enter the interval of prime number :";
//     cin >>n1>>n2;

// for (int x=n1+1; x<n2-1; x++)
// {
//     for (int j=2; j<x;j++)
//     {
//         if (x%j==0)
//         {
//            break;
//         }
//        if (j==x)
//        {
//         cout<<j;
//        }
        
//     }
    
// }
   
// }
#include <iostream>
using namespace std;

int main() {

  int low, high, i;
  bool is_prime = true;

  cout << "Enter two numbers (intervals): ";
  cin >> low >> high;

  cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

  while (low < high) {
    is_prime = true;

    // 0 and 1 are not prime numbers
    if (low == 0 || low == 1) {
      is_prime = false;
    }
 
    for (i = 2; i <= low/2; ++i) {
      if (low % i == 0) {
        is_prime = false;
        break;
      }
    }
        
    if (is_prime)
      cout << low << ", ";

    ++low;
  }

  return 0;
}