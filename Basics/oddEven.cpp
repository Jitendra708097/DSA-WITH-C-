#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : \n";
    cin>>n;

    if(n%2 == 0)
    {
        cout<<"Number is even \n";
    }
    else
    {
        cout<<"Number is not even \n";
    }

    int check = 10&500?8:7;
    cout<<check;
}