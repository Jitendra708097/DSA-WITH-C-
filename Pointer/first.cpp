#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr = &a;
    cout<<ptr<<endl;  //  it prints the address memory where 10 actual is store in RAM

    cout<<*ptr<<endl;  // it print actual value of their address

    int b = 30;
   int *ptr1 = &b;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;


    // it swaps their values 
    ptr = ptr1;
    ptr1 = &a;

    cout<<*ptr<<endl;
    cout<<*ptr1<<endl;

    char c[] = "GATE2024";
    char *p = c;
    cout<<++p;
}