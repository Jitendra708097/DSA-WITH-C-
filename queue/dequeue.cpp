// Implementation of dequeue using array
// operations in dequeue
//push_front
//push_back
//pop_rear
//pop_front
// first element in dequeue
// last element in dequeue
// STL dequeue<int>q;
#include<iostream>
using namespace std;
class dequeue
{
    public :
    int front , rear , size;
    int *arr;
    dequeue(int n)
    {
        size = n;
        arr = new int[n];
        front = rear =-1;
    }
   bool Isempty()
   {
    return front == -1;
   }
   bool Isfull()
   {
    return (rear+1)%size == front;
   }
   void push_front(int value)
   {
    if(Isempty())
    {
        front = rear = 0;
        arr[front] = value;
        return;
    }
    else if(Isfull())
    {
        return;
    }
    else
    {
        front = (front-1+size)%size;
        arr[front] = value;
        return;
    }
   }
    void push_back(int value)
   {
    if(Isempty())
    {
        front = rear = 0;
        arr[rear] = value;
        cout<<"the value is pushed : "<<arr[rear]<<endl;
        return;
    }
    else if(Isfull())
    {
        cout<<"dequeue me jagah khatm "<<endl;
        return;
    }
    else
    {
        rear = (rear+1)%size;
        arr[rear] = value;
        cout<<"the value is pushed : "<<arr[rear]<<endl;
        return;
    }
   }
   void pop_front()
   {
    if(Isempty())
    {
        return;
    }
    else
    {
        if(rear == front)
        {
            cout<<"element is popped : "<<arr[rear]<<endl;
            rear = front = -1;
        }
        else
        {
            cout<<"element is popped : "<<arr[front]<<endl;
            front = (front+1)%size;
        }
    }
   }
   void pop_rear()
   {
    if(Isempty())
    {
        return;
    }
    else
    {
        if(rear == front)
        {
            cout<<"element is popped : "<<arr[rear]<<endl;
            rear = front = -1;
        }
        else
        {
             cout<<"element is popped : "<<arr[rear]<<endl;
            rear = (rear-1+size)%size;
        }
    }
   }
   //first element ko print krane tareeka
   int start()
   {
    if(Isempty())
    {
        return -1;
    }
    else
    {
        return arr[front];
    }
   }
   //last element ko print krane tareeka
   int last()
   {
    if(Isempty())
    {
        return -1;
    }
    else
    {
        return arr[rear];
    }
   }
};
int main()
{
    dequeue d(6);
    d.push_back(5);
    d.pop_front();
    d.push_back(50);
    d.push_back(500);
    d.push_back(5000);
    d.push_back(50000);
    d.push_back(500000);
    d.pop_rear();
    d.push_back(5000000);
   cout<< "the last element of dequeue : "<<d.last()<<endl;
   cout<<"the first element of dequeue : "<<d.start()<<endl;
}