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
     
// This is a code reverse array without printing them from end;

    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++,end--;
    }

    cout<<"This is the reverse array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}