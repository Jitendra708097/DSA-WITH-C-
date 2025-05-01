/*
average time complexity of quick sort O(logn*n)
worst case  O(n*n)*/

#include<iostream>
using namespace std;

int partition(int arr[],int start,int end)

{
     int pos = start;
    for(int i = start;i<=end;i++)
    {
        if(arr[i]<=arr[end])
        {
            swap(arr[i],arr[pos]);
            pos++;
        }
    }

    return pos-1;  // it returns the index of correct position of pivot element
}
void quickSort(int arr[],int start,int end)
{
    if(start>=end)
    return ;

    int pivot = partition(arr,start,end);  // which gives the pivot element  
    quickSort(arr,start,pivot-1); // it contains all small element than pivot  or  left side
    quickSort(arr,pivot,end);  // it contains all larger element than pivot   ro right side
}
int main()
{ 
     int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the element : ";
        cin>>arr[i];
    }

     quickSort(arr,0,n-1);
    
     cout<<"the sorting array : "<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<" the element is : ";
        cout<<arr[i];
        cout<<endl;
    }
}