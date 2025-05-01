// implementation of maxheap using array
// it is a complete binary tree(CBT)
//all levels are completely filled except last level
//at last level nodes should be filled from left side
// parent element should be greater than or equal to child node
/*Ex =                             30 |
                             | 9 |      |20|
                         |  8 |   7    16  12
                        5     4   */
#include<iostream>
using namespace std;
class maxheap
{
    int *arr;
    int size;  // current size of heap
    int total_size;  // total size of array

    public :
    maxheap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }
    // insertion into heap
    void insert(int value)
    {
        if(size==total_size)
        {
            cout<<"Heap overflow \n";
            return;
        }

        arr[size] = value;
        int index = size;
        size++;
       

       // compare with its parent element
       while(index>0 && arr[(index-1)/2]<arr[index])
       {
        swap(arr[(index-1)/2],arr[index]);
        index = (index-1)/2;
       }
       cout<<arr[index]<<" "<<"inserted into the heap\n";
    }
    void print()
    {
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    maxheap j1(9);
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