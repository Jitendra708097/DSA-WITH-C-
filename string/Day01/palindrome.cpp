#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the string : ";
    string s;
    //cin>>s;
    getline(cin,s);
    int start = 0,end = s.size()-1;
    while(start<end)
    {
        if(s[start] != s[end])
        {
            cout<<"it is not palindrome string ";
            return 0;
        }
        start++,end--;
    }
    cout<<"it is a palindrome string ";
}