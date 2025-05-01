#include<iostream>
using namespace std;
int main()
{
    int n,check=0;
    cout<<"Enter the number : \n";
    cin>>n;
    int reverse=0,orignal_number=n,s;
    while(n != 0)
    {
        s = n%10;
        reverse = reverse*10+s;
        n/=10;
    }

    if(orignal_number == reverse)
    {
        cout<<"Number is palindrome \n";
    }
    else
    {
        cout<<"Number is not palindrome \n";
    }
}