#include<iostream>
using namespace std;
int main()
{

    // print size of datatype in byte
    int a = 10;  // 4byte
    float b = 5.55;  // 4 byte
    double c = 5.55555555555555; // 8 byte
    char d = 'A'; // 1 byte
    bool e = 0;  // 1 byte
    long int f= 10000;  // 4 byte
    long long g= 111111111111111111;  // 8 byte
    long long int h = 111111111111111111;  // 8 byte
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(e)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(g)<<endl;
    cout<<sizeof(h)<<endl;
    return 0;
}