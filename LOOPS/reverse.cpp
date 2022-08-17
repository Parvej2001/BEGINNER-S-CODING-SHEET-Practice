//8) Write a Program to Reverse a given Number N by user
#include <iostream>
using namespace std;
int main(){

    int num,reverse=0,rem;
    cout<<"Enter number:";
    cin>>num;
    while(num!=0){
         
         rem=num%10;
         reverse=reverse*10+rem;
         num/=10;
    }
    cout<<"Reverse of given number is:"<<reverse;


}