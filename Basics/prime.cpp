#include<iostream>
using namespace std;
int main()
{
    int n,check=0;
    cout<<"Enter the number : \n";
    cin>>n;

    if(n<2)
    {
        cout<<"Number is not prime \n";
        return 0;
    }
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                check = 1;
            }
        }
    }

    if(check == 1)
    {
        cout<<"Number is not prime \n";
    }
    else
    {
        cout<<"Number is prime ";
    }
}