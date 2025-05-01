#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,4,5,6,7};
    for(int i=0;i<5;i++)
    {
        for(int j=i;j<5;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
}