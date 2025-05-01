#include<iostream>
using namespace std;
int main()
{

    string str = "Jitendra";
    int start = 0,end = str.size()-1;
    while (start<=end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++,end--;
    }

    cout<<"This is a reversed string : "<<str;
    
}