//implementation of pair using class
// syntax of pair 
// pair<datatype1,datatype2>name of pair
#include<iostream>
using namespace std;
class jitendra
{
    public :
string first;
    int second;
};
int main()
{
    jitendra j;
    j.first = "jitendra";
    j.second = 19;
    cout<<j.first<<" "<<j.second;
}