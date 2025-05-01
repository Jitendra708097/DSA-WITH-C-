/*  * * * * *
    * * * *
    * *
    * 
    * *
    * * *
    * * * *
    * * * * *
    */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of : ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        for(int j =i;j<n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
  for(int i=1;i<n;i++)
    {
        for(int j =1;j<=i;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // triangle print below
     for(int row =1;row<=n;row++)
    {
        for(int col = 1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(int col = 1;col<=2*row-1;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int row =1;row<=n;row++)
    {
        for(int col = 1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(int col = 1;col<=2*row-1;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
     for(int row =n;row>=1;row--)
    {
        for(int col = 1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(int col = 2*row-1;col>=1;col--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
