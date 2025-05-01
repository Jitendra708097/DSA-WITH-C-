// Pass by reference 

#include<iostream>
#include<vector>
using namespace std;

void swap(int &first,int &second)
{
    int temp = first;
    first = second;
    second = temp;
}

// function for vector 
void Double(vector<int>&v1)
{
    for(int i=0;i<5;i++)
    v1[i] = 2;

}



int main()
{
    int num = 10;
    int &temp = num;
    cout<<num<<endl;
    cout<<temp<<endl;

    // for check that these are both pointing 
    // same memory location we print their 
    // memory addresses 

    cout<<&num<<endl;
    cout<<&temp<<endl;

    // using pass by refernce swap two numbers
    int first = 10;
    int second = 20;
    // Before swapping
    cout<<first<<" "<<second<<endl;
    swap(first,second);
    // after swapping
    cout<<first<<" "<<second<<endl;

    vector<int>v(5,0);
    Double(v);
    for(int i=0;i<5;i++)
    cout<<v[i]<<" ";
    cout<<endl;
    

}