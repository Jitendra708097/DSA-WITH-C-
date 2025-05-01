#include<iostream>
using namespace std;
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
   for(int i=0;i<n-1;i++)
    {
        // first method 
        // int key = arr[i];
        // int j = i-1;
        // while (key < arr[j] && j>=0)
        // {
        //     arr[j+1] = arr[j];
        //     --j;
        // }
        // arr[j+1] = key;
        for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            else
            {
                break;
            }
        }
    }
    cout<<"the sorting array : "<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}