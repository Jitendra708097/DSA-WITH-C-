#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==1)
    return 1;
    if(n == 0)
    return 0;

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<fib(n);
}