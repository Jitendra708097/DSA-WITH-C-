#include<iostream>
using namespace std;
int main()
{
    string str = "Jitendra";

    int start = 0;
    int size = 0;
    while (str[start] != '\0')
    {
        size++;
        start++;
    }
    
    cout<<"This is the size of string : "<<size;
}