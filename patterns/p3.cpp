 /*     *
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        *       */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of pattern : ";
    cin>>n;
    for(int row =1;row<=n;row++)
    {
        for(int col = 1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(int col = 1;col<=2*row-1;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
     for(int row =n;row>=1;row--)
    {
        for(int col = 1;col<=n-row;col++)
        {
            cout<<"  ";
        }
        for(int col = 2*row-1;col>=1;col--)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}