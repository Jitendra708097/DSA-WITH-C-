/*  time complexity  O(N*logN)
    space complexity O(N)*/

#include<iostream>
#include<vector>
using namespace std;

// Array sorted in ascending order
/*
void merge(int arr[],int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left = start,right = mid+1,index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]<=arr[right])
        {
            temp[index] = arr[left];
            index++,left++;
        }

        else
        {
            temp[index] = arr[right];
            index++,right++;
        }
    }

    while(left<=mid)
    {
        temp[index] = arr[left];
        index++,left++;
    }

    while(right<=end)
    {
        temp[index] = arr[right];
        index++,right++;
    }

    index=0;
    while(start<=end)
    {
        arr[start] = temp[index];
        start++,index++;
    }
}     */

// Array sorted in descending order

void merge(int arr[],int start,int mid,int end)
{
    vector<int>temp(end-start+1);
    int left = start,right = mid+1,index=0;
    while(left<=mid && right<=end)
    {
        if(arr[left]>=arr[right])
        {
            temp[index] = arr[left];
            index++,left++;
        }

        else
        {
            temp[index] = arr[right];
            index++,right++;
        }
    }

    while(left<=mid)   // this is for remaining element in left part array
    {
        temp[index] = arr[left];
        index++,left++;
    }

    while(right<=end)  // this is for remaining element in right part array
    {
        temp[index] = arr[right];
        index++,right++;
    }

    index=0;
    while(start<=end)    // copy all elements in original arrray from vector
    {
        arr[start] = temp[index];
        start++,index++;
    }
}
void mergeSort(int arr[],int start,int end)
{

    if(start==end)
    return ;

    int mid = start+(end-start)/2;
    mergeSort(arr,start,mid); // this is divide array in left part
    mergeSort(arr,mid+1,end); // this is divide array in right part
    merge(arr,start,mid,end);  // merge the array in sorted order
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

     mergeSort(arr,0,n-1);
    
     cout<<"the sorting array : "<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<" the element is : ";
        cout<<arr[i];
        cout<<endl;
    }
}