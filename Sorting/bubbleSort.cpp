// bubble sort algorithm
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
        for(int j=i+1;j<n;j++)   //4 7 1 2 6 9 
        {
            if(arr[i]>arr[j])
            {
                //swap(arr[j],arr[i]);
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"the sorting array : "<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}