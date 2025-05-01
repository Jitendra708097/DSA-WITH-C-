// Creation of linklist in Statical way 
/*
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
int main()
{
    Node A1;
    A1.data = 6;
    A1.next = NULL;
    cout<<A1.data;
}

//Creation of linklist in dyanmic way
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
int main()
{
    Node *head;
    head = new Node();
    head->next = NULL;
    cout<<head->data;
} */
// creation of linklist using constructor
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    //constructor use to initiliase the value
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    Node *head;
    head = new Node(4);
    cout<<head->data;
}