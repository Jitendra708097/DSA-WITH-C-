#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,2,3,3};
    int count[5] = {0};
    for(int i=0;i<5;i++)
    {
        count[arr[i]]++;
    }

    for(int i=0;i<5;i++)
    {
        if(count[i]>1)
        {
            cout<<arr[i]<<" ";
        }
    }
}