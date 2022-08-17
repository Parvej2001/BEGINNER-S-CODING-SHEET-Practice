//7) Write a Program to Find LCM of two numbers entered by user
#include <iostream>
using namespace std;
int main(){

    int n1,n2,i, max;
    cout<<"Enter numbers: ";
    cin>>n1>>n2;
    max=n1>n2?n1:n2;
    for (i = max; i <n1*n2; i++)
    {
        if (i%n1==0 && i%n2==0)
        break;
    }
    cout<<"LCM is : "<<i;
    return 0;

}