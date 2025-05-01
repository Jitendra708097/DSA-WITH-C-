#include<iostream>
using namespace std;

char convert(char c)
{
    char ans = c-32;
    return ans;
}

int main()
{
    cout<<"Enter the character : ";
    char a;
    cin>>a;
    cout<<convert(a);
}