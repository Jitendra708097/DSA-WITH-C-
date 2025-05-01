#include<iostream>
using namespace std;
int main()
{
    int size = 0,start = 0;;
    cout<<"Enter the string  : ";
    string s;
    cin>>s;
    while( s[start] != '\0')
    {
        size++;
        start++;
    }
    cout<<size;
}