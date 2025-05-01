#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // string str;
    // getline(cin,str);

    // for(int i=0;i<str.size();i++)
    // {
    //     for(int j=0;j<str.size();j++)
    //     {
    //         if(str[i]<str[j])
    //         {
    //             swap(str[i],str[j]);
    //         }
    //     }
    // }

    // cout<<"The sorted string : "<<str;

    string str;
    getline(cin,str);
    int check[26] = {0};
    for(int i=0;i<str.size();i++)
    check[str[i]-'a']++;

    
    for(int i=0;i<26;i++)
    {
        if(check[i] != 0)
        {
           cout<<str[i];
        }
    }
}