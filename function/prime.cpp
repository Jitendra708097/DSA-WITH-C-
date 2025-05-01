#include<iostream>
using namespace std;

// This is use to check number is prime or not prime 
int prime(int n)
{
    if(n<2)
    return 0;

    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        return 0;
    }

    return 1;
}

// This is use to factorial of any number
int fact(int n)
{
    int ans =1;

    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }

    return ans;
}
int main()
{
    int a,b;
    cout<<"Enter the number : ";
    cin>>a>>b;
    // A is prime or not
    cout<<prime(a)<<endl;
    // Factorial of A
    cout<<fact(a)<<endl;
    // B is prime or not 
   cout<< prime(b)<<endl;
    // Factorial of B 
    cout<<fact(b)<<endl;
    // A-B is prime or not 
    cout<<prime(b-a)<<endl;
    // Factorial of B-A 
    cout<<fact(b-a)<<endl;

}