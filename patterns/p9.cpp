#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}