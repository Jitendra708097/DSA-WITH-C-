#include<iostream>
using namespace std;
int main()
{
    char arr[] = {'1','2','3','4','5','\0'};
    char *ptr = arr;
    cout<<arr<<endl;
    cout<<ptr<<endl;

    // To print their addresses we (void*)
    cout<<(void*)arr<<endl;
    cout<<(void*)ptr<<endl;

    char name = 'a';
    cout<<(void*)&name<<endl;
    char *ptr1 = &name;
    cout<<(void*)ptr1;  
    
}