#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"the sum of two numbers : "<<a+b<<endl;
}
void subtraction(int a,int b)
{
    cout<<"the subtractio of two numbers : "<<a-b<<endl;
}
void multiplication(int a,int b)
{
    cout<<"the multiplication of two numbers : "<<a*b<<endl;
}
void division(float a,float b)
{
    cout<<"the division of two numbers : "<<a/b<<endl;
}

int main()
{
    int c,d;
    cout<<"Enter the value of C and D : ";
    cin>>c>>d;
    
    string str;
    cout<<"Enter the operation type which you want to done : ";
     cin>>str;

     if(str == "add")
     {
      add(c,d);
     }
     else if(str == "subtraction")
     {
      subtraction(c,d);
     }
     
    else if(str == "multiplication")
    {
      multiplication(c,d);
    }

    else if(str == "division")
    {
      division(c,d);
    }
    else 
    {
        cout<<"Enter valid operation type ";
    }
}