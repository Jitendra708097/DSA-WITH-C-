/*
* * *   *
    *   *
* * * * *
*   *
*   * * *
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";  
    cin>>n;
    if(n<2)
    {
        cout<<"sorry  : pattern can't make because number is less than 2  "<<endl;
        cout<<"please enter valid number "<<endl;
        return 0;
    }
    for(int row=1;row<=n+1;row++)
    {
       cout<<"*"<<" ";
    }
    for(int i=1;i<(2*(n-1))+1;i++)       /* print this -> [* * * * * *         *]    */
    {
       cout<<" ";
    }
     cout<<"*";                        
    cout<<endl;

    /* print this ->           
          *         *
          *         *
          *         *
          *         *
             */
    for(int col = 1;col<n;col++)
    {
        for(int row = 1;row<=2*n;row++)
        {
            cout<<" ";     
        }
        for(int row = 1;row<=1;row++)
        {
            cout<<"*";
        }
        for(int i=1;i<=(2*(n-1))+1;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=1;i++)
        {
            cout<<"*";
        }
        cout<<endl; 
    }  
    // print this -> [* * * * * * * * * * *] 
    for(int i=1;i<=2*n+1;i++)
    {
        cout<<"*"<<" ";
    } 
    cout<<endl;
    /* print this ->
*         *
*         *
*         *
*         * 
    */ 
    for(int i=1;i<n;i++)
    {
        for(int i=1;i<=1;i++)
        {
            cout<<"*";
        }
        for(int i=1;i<=2*n-1;i++)
        {
            cout<<" ";
        }
        for(int i=1;i<=1;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"*";
    /* print this ->[*         * * * * * *]*/
    for(int i=1;i<=2*n-1;i++)
    {
        cout<<" ";
    }
    for(int i=1;i<=n+1;i++)
    {
        cout<<"*"<<" ";
    }
}