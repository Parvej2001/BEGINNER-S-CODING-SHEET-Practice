//12) Write a Program to Check Whether a Number N entered by user is Palindrome or Not
#include <iostream>
using namespace std;
int main(){
    int n,num,reverse=0,rem;
    cout<<"Enter number:";
    cin>>num;
    n=num;
    do{
         
         rem=num%10;
         reverse=reverse*10+rem;
         num/=10;
    }while(num!=0);
    cout<<"Reverse of given number is:"<<reverse<<endl;
    if(n == reverse)
        cout<<"The given number is a palindrome.";
    else
        cout<<"Its not a palindrome.";
    return 0;
}