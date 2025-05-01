#include<iostream>
using namespace std;

void Pass(int **ptr)
{
    *ptr = *ptr+1;
}

int main()
{
    int num = 10;

    // single pointer 
    int *p1 = &num;
    cout<<p1<<endl;

    // double pointer 
    int **p2 = &p1;
    cout<<p2<<endl;
     
    // triple pointer 
    int ***p3 = &p2;
    cout<<p3<<endl;

    // just like that we create multiple type pointer 
    // The basic concept is one pointer is address of another pointer 


    *p1 = *p1+5;
    cout<<*p1<<endl;

    **p2 = **p2+10;
    cout<<**p2<<endl;

    ***p3 = ***p3+15;
    cout<<***p3<<endl;

    // Pass(p2);
    // cout<<*p2<<endl;
    Pass(p2);
    cout<<*p1<<endl;
    cout<<num<<endl;
}