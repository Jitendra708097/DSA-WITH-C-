// create 2D Array using pointer 
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the size of array : ";
    cin>>row>>col;

    int **arr = new int[row]*arr1;
    for(int i=0;i<row;i++)
    {
        arr1 = new int[col];
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
}