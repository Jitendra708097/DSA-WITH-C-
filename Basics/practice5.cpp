#include<iostream>
using namespace std;
int main()
{
    long long n,count = 0;
    cout<<"Enter the number :";
    cin>>n;
    while(n>0)
    {
        n/=10;
        count++;
    }
    cout<<count;
}