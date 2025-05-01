#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "jitendra";
    cout<<str<<endl;
    cout<<&str<<endl; 

    for(int i=0;i<str.size();i++)
    cout<<(void*)&(str[i])<<endl;
}