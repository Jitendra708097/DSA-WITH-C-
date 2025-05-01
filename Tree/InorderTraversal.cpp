#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public : 
    int data;
    Node *right,*left;

    Node(int value)
    {
        data = value;
        right = left = NULL;
    }
};
// inorder traversal order
// To print the tree 
// LNR  left most uske bad Node then Right
void preorder(Node *root)
{
    if(root==NULL)
    return;

    preorder(root->left);
    preorder(root->right);
     cout<<root->data<<" ";
};
int main()
{
    int x;
    cout<<"Enter the value of x : ";
    cin>>x;
    int first,second;
    queue<Node*>q;
    Node *root = new Node(x);
    q.push(root);
    while(!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout<<"Enter the value of left : ";
        cin>>first; //left node
        if(first!=-1)
        {
            temp->left = new Node(first);
            q.push(temp->left);
        }
        cout<<"Enter the value of right : ";
        cin>>second;
        if(second!=-1)
        {
            temp->right = new Node(second);
            q.push(temp->right);
        }
    }
    cout<<"inorder traversal answer : ";
    preorder(root);
}