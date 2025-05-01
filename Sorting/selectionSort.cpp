// in selection sort we select smallest element in array then swap and follow again ans again this step until array is sorted
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
    for(int i=0;i<n;i++)
    {
        int index = i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }
    cout<<"the sorting array : "<<endl;
     for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}