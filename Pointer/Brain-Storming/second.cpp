#include<iostream>
using namespace std;

void second(int *first,int *second)
{
    first = second;
    *first = 2;
}
int main()
{
    int i=0,j=1;
    second(&i,&j);
    cout<<i<<" "<<j;
}