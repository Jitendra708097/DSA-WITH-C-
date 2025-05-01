#include<iostream>
using namespace std;
int main()
{
    int n,search;  //size of array
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the number you want to search : ";
    cin>>search;
    int arr[1000];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            cout<<"Element is found : "<<i;
        }
    }
    cout<<"Element not found : ";
}