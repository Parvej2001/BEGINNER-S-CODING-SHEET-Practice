// 1) Write a Program that takes N elements (max. value of N is 100
// and N is the float number specified by user) from user, stores data
// in an array and Calculates the average of those numbers.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Size of the array:";
    cin>>n;
    double arr[n];
    double count;
    double sum=0;
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
    for (int i = 0; i < n; i++)
    {
       sum=sum+arr[i];
       ++count;
    }
    cout<<"The sum of the array is : "<<sum<<endl;
    cout<<"The average of the array element is : "<<sum/count;
    

}