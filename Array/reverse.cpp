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
        cout<<"enter the element :";
        cin>>arr[i];
    }
     
    //  it print reverse element of array
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
}