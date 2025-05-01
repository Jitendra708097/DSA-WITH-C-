#include<iostream>
using namespace std;
class Maxheap
{
    int *arr;
    int size; // current size heap
    int totalsize; // tota size of array

    public :
    Maxheap(int n)
    {
        arr = new int [n];
        size = 0;
        totalsize = n;
    }

    // insert into heap
    void insert(int value)
    {
        if(size == totalsize)
        {
            cout<<"Heap overflow :"<<endl;
            return ;
        }

        arr[size] = value;
        int index = size;
        size++;

        // compare it with its parent

        while(index>0 && arr[(index-1)/2]<arr[index])
        {
            swap(arr[(index-1)/2],arr[index]);
            index = (index-1)/2;
        };
        cout<<arr[index]<<" "<<"is inserted into the heap : \n";
    }
    void print()
    {
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
     Maxheap j1(9);
    j1.insert(30);
    j1.insert(9);
    j1.insert(20);
    j1.insert(8);
    j1.insert(7);
    j1.insert(16);
    j1.insert(12);
    j1.insert(5);
    j1.insert(4);
    j1.print();
        j1.insert(30);
    j1.insert(9);
    j1.insert(20);
    j1.insert(8);
    j1.insert(7);
}