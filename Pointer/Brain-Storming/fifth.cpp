#include<iostream>
using namespace std;

int four(int x,int *py,int **ppz)
{
    int y,z;
    **ppz+=1;
    x = **ppz;
    *py+=2;
    y = *py;
    x+=3;
    return x+y+z;
}
int main()
{
    int c , *b,**a;
    c = 4,b = &c,a = &b;
    cout<<four(c,b,a);
}