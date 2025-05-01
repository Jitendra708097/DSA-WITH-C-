/*     
* * * * * * * * * * * * * * * *
* * * * * * *     * * * * * * * 
* * * * * *         * * * * * * 
* * * * *             * * * * *
* * * *                 * * * *
* * *                     * * * 
* *                         * *
*                             * 
*                             *
* *                         * * 
* * *                     * * *
* * * *                 * * * *
* * * * *             * * * * *
* * * * * *         * * * * * * 
* * * * * * *     * * * * * * *
* * * * * * * * * * * * * * * *
*/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;

     ofstream fout;

    fout.open("pattern.text");
    
    for(int row=n;row>=1;row--)
    {
        for(int col = 1;col<=row;col++)
        {
            fout<<"*"<<" ";
        }
        for(int col = 1;col<=2*(n-row);col++)
        {
            fout<<" ";
        }
        for(int col=1;col<=2*(n-row);col++)
        {
            fout<<" ";
        }
        for(int col = 1;col<=row;col++)
        {
            fout<<"*"<<" ";
        }
        fout<<endl;
    }
    for(int row =1;row<=n;row++)
    {
        for(int col = 1;col<=row;col++)
        {
            fout<<"*"<<" ";
        }
        for(int col = 1;col<=2*(n-row);col++)
        {
            fout<<" ";
        }
        for(int col=1;col<=2*(n-row);col++)
        {
            fout<<" ";
        }
        for(int col = 1;col<=row;col++)
        {
            fout<<"*"<<" ";
        }
        fout<<endl;
    }
}