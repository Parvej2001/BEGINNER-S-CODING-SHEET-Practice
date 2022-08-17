//9) Write a Program to display sum of all digits of a given Number N by user
#include <iostream>
using namespace std;
int main(){

    int num,sum=0,rem;
    cout<<"Enter number:";
    cin>>num;
    while(num!=0){
         
         rem=num%10;
         sum=sum+rem;
         num/=10;
    }
    cout<<"sum of given digit is:"<<sum;
}