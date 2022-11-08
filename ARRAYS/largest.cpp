// 2) Write a Program that takes n element from user and displays
// the largest element of an array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size of the array:";
    cin>>n;
    int arr[n];
     cout<<"Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    cout<<"The array elements are: ";
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    for (int i = 1; i < n; i++)
    {
       if (arr[0]<arr[i])
       {
        arr[0]=arr[i];
       }
       
    }
    cout<<"The largest element is: "<<arr[0];
    
}