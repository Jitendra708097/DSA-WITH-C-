#include<iostream>
using namespace std;
int main()
{
    /* int m =0;
    while(++m<=5)
    {
        if(m==3)
        continue;
        cout<<m<<" ";
    }
    */
int a[8]={ 2,2,2,2,10,2,4,2};
int sum,dum,i,k,j;
for (i=0;i<8;i++)
{
sum=0;
dum=0;
for (j=i-1;j>=0;j--)
{
sum=sum+a[j];

}
for (k=i+1;k<8;k++)
{

dum=dum+a[k];

}
if( sum==dum)
{
cout<<i;
break;
}
}

}