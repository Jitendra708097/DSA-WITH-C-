#include<iostream>
using namespace std;
int main()
{
    int a = 99;
    char c = 'b';
    c = a;  // this is known as typecasting
    // beacuse a is converted into ASCII value
    cout<<c;

    // print a to z alphabets
    for(char i  = 'A';i<='Z';i++)
    {
        cout<<i<<" ";
    }
}