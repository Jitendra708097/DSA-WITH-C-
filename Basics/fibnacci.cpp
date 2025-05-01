#include<iostream>
using namespace std;
int main()
{
    int first = 0,second = 1,curr,ans=0,n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n == 1)
    {
    cout<<first;
    return 0;
    }
    
    
    for(int i=2;i<=n;i++)
    {
        curr = first+second;
        second = first;
        first = curr;
    }

    cout<<curr;
}