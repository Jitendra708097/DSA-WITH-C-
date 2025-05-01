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
     
    //  it print minimum element from array
    int minimum=100000;
     for(int i=0;i<n;i++)
    {
        if(arr[i]<minimum)
        {
            minimum = arr[i];
        }
    }

    cout<<minimum;
}