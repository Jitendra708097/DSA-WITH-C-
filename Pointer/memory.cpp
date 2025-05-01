#include<iostream>
using namespace std;
int main()
{
    // memory allocated for integer type variable in heap 
    // for allocation memory in heap we use "new" keyword
    // By default memory allocated in stack for any type of function
    int *ptr = new int;
    *ptr = 20;  // value assign
    cout<<*ptr<<endl;  // it prints value
    cout<<ptr<<endl; // it address of 20

    // for float type variable
    float *ptr1 = new float;
    *ptr1 = 25.89;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;

    // we created array dynamically using "new" keyword
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int *ptr2 = new int[n];
    for(int i=0;i<n;i++)
    *(ptr2+i) = i+1;  // ptr2[i] = i+1;  

    // print array element
    for(int i=0;i<n;i++)
    cout<<*(ptr2+i)<<" ";  //cout<<ptr2[i]<<" ";
}