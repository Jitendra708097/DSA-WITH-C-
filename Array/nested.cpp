#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,4,5,6,7};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}