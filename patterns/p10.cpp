#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter the row : ";
    cin>>row;

    for(int i=1;i<=row;i++)
    {
        for(int j=i;j<row;j++)
        {
            cout<<" ";
        }
        for(int k=i;k>=1;k--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}