#include<iostream>
using namespace std;

// void incr(int n)
// {
//     n++;
// }

// void increament(int *ptr)
// {
//     // *ptr = *ptr+1;   it increase value that is present on that address
//     cout<<ptr<<endl;
//     ptr = ptr+1;  // it increase address by 4 byte due to ptr is int type
//     cout<<ptr<<endl;
// }


// function for double values
void db(int *p)
{
    for(int i=0;i<5;i++)
    {
        *(p+i) = *(p+i)*2;
    }
}

// function to swap two values using pointer
void swap(int *p1,int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    // int num = 10;
    // int temp = num;
    // cout<<temp<<endl;
    // incr(num);
    // cout<<num<<endl;

    // // This is a Pass by Poiter 
    // increament(&num);
    // cout<<num;

    int arr[5] = {1,2,3,4,5};
    // Double all these value using pointer 
    db(arr);
    for(int i=0;i<5;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;

    int first = 10;
    int second = 20;
    // swap these values using pointer 
    swap(&first,&second);
    cout<<first<<" "<<second;
}