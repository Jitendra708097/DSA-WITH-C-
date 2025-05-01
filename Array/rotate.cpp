#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" enter the n : ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the number : ";
        cin>>arr[i];
    }
     
     int rotate = arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = rotate;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}