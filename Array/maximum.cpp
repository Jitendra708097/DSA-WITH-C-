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
     
    //  it print maximum element from array
    int maximum=0;
     for(int i=0;i<n;i++)
    {
        if(arr[i]>maximum)
        {
            maximum = arr[i];
        }
    }

    cout<<maximum;
}