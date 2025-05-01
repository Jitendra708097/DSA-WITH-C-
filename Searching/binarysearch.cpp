#include<iostream>
using namespace std;
int main()
{
    int n,search;  //size of array
    int start =0,end=n-1;
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
    while(start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==search)
        {
            cout<<"element is found : "<<mid;
        }
        else if(arr[mid]<search)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    cout<<"Element not present in this array";
}