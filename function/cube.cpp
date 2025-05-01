#include<iostream>
using namespace std;

int cube(int number)
{
    int ans;

    ans = number*number*number;

    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    cout<<cube(n)<<endl;
    cout<<cube(4)<<endl;
    cout<<cube(2)<<endl;
    cout<<cube(7)<<endl;
    cout<<cube(3)<<endl;
    cout<<cube(9)<<endl;
}