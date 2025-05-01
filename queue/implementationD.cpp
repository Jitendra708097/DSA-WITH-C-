// implemenatation of dequeue using linked list
#include<iostream>
using namespace std;
class Node
{
    public : 
    int data;
    Node *prev,*next;

    Node(int value)
    {
       data = value;
       prev = next = NULL;
    }
};

class dequeue
{
    Node *front,*rear;
    public : 

    Node()
    {
        front = rear = NULL;
    }
    // push in front

    void push_front(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            cout<<"pushed "<<x <<"in front of dequeue";
            return;
        }
        else
        {
            Node *temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            temp = front;
        }
    }

    // dequeue ke piche element insert krne ke liye

    void push_back(int x)
    {
        if(front == NULL)
        {
            front = rear = new Node(x);
            cout<<"pushed "<<x <<"in back"<<endl;
        }
        else
        {
            Node *temp = new Node(x);
            temp->prev = rear;
            rear->next = temp;
            temp = rear;
            return;
        }
    }
    // pop or delete
    void pop_front()
    {
        if(front == NULL)
        {
            cout<<"Dequeue underflow"<<endl;
            return;
        }
        else
        {
          Node *temp = front;
          front = front->next;
          delete temp;
        }
        if(front)
        {
            front->prev = NULL;
        }
        else
        {
            rear = NULL;
        }
    }
    void pop_back()
    {
        if(front == NULL)
        {
            cout<<"deqeue underflow "<<endl;
            return;
        }
        else
        {
            Node *temp = rear;
            rear = rear->next;
            delete temp;
        }
        if(rear)
        {
            rear->next = NULL;
        }
        else
        {
            front = NULL;
        }
    }

    int start()
    {
        if(front == NULL)
        {
            return 1;
        }
        else
        {
            return front->data;
        }
    }
    int end()
    {
        if(rear == NULL)
        {
            return -1;
        }
        else
        {
            return rear->data;
        }
    }
};
int main()
{
    dequeue d;
    d.push_back(5);
}