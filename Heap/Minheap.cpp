// implementation of minheap using array
// it is a complete binary tree(CBT)
//all levels are completely filled except last level
//at last level nodes should be filled from left side
// parent element should be less than or equal to child node
/*Ex =                             30 |
                             | 90 |      |200|
                         |  800 |  700    1600  1200
                        5000     4000   */
#include<iostream>
using namespace std;
class minheap
{
    int *arr;
    int size;  // current size of heap
    int total_size;  // total size of array

    public :
    minheap(int n)
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
       while(index>0 && arr[(index-1)/2]>arr[index])
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
    minheap j1(9);
    j1.insert(30);
    j1.insert(90);
    j1.insert(200);
    j1.insert(800);
    j1.insert(700);
    j1.insert(1600);
    j1.insert(1200);
    j1.insert(5000);
    j1.insert(4000);
      j1.insert(700);
    j1.insert(1600);
    j1.insert(1200);
    j1.insert(5000);
    j1.insert(4000);
    j1.print();
}