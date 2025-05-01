#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[10] = {1,1,1,2,2,3,3,4,5,5};
    int note = 0,index = 0;
    int arr[10];
    for(int i=0;i<10;i++)
    {
        if(a[i] != note)
        {
            arr[index] = a[i];
            note = a[i];
            index++;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}