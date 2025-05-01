#include<iostream>
using namespace std;
int main()
{
    string s1;
    cout<<"Enter the first string : "<<endl;
    getline(cin,s1);

    cout<<s1<<endl;

    string s2;
    cout<<"Enter the second string : "<<endl;
    getline(cin,s2);

    cout<<s2<<endl;

    string s3 = s1+s2;
    cout<<s3<<endl;
}