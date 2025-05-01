#include<iostream>
using namespace std;
class Node
{
    public :
    int data;
    Node *left,*right;
    
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
Node *insertBST(Node *root,int target)
{
    if(root==NULL)
    {
        Node *temp = new Node(target);
        return temp;
    }
    if(root->data>target)
    {
        root->left = insertBST(root->left,target);
    }
    else
    {
        root->right = insertBST(root->right,target);
    }
    return root;
}
  void inorder(Node *root)
{
    if(root==NULL)
    return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    Node *root=NULL;
    int arr[10] = {10,20,5,6,9,8,7,11,12};
    for(int i=0;i<10;i++)
     root = insertBST(root,arr[i]);



    inorder(root);
}