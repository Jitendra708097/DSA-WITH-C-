#include<iostream>
using namespace std;

class Node
{
    public :

    int data,height;
    Node *left,*right;

    Node(int value)
    {
        data = value;
        height = 1;
        left = right = NULL;
    }
};

int getheight(Node *root)
{
    if(!root)
    return 0;

    return root->height;
};

int getbalance (Node *root)
{
    return getheight(root->left)-getheight(root->right);
}


// right rotation
Node* rightrotation(Node *root)
{
   Node *child = root->left;
   Node *childright = child->right;

   child->right = root;
   root->left = childright;

   // update the height
   root->height = 1+max(getheight(root->left),getheight(root->right));
   child->height = 1+max(getheight(child->left),getheight(child->right));
   return child;
};

// left rotation
Node* leftrotation(Node *root)
{
    Node *child = root->right;
   Node *childleft = child->left;

   child->left = root;
   root->right = childleft;

   // update the height
   root->height = 1+max(getheight(root->left),getheight(root->right));
   child->height = 1+max(getheight(child->left),getheight(child->right));
    return child;
};

Node* insert(Node *root,int key)
{
    // Doesn't exist
    if(!root)
    return new Node(key);

    // Exist hai
    // left side
    if(key<root->data)
    root->left = insert(root->left,key);
    // right side
    else if(key>root->data)
    root->right = insert(root->right,key);
    else
    return root;
   // Update height
   root->height = 1+max(getheight(root->left),getheight(root->right));

   // balancing
  int balance = getbalance(root);

  // Left Left Case
  if(balance>1 && key<root->left->data)
  return rightrotation(root);
  // Right Right Case
  else if(balance<-1 && key>root->right->data)
  return leftrotation(root);
  // Left Right Case
  else if(balance>1 && key>root->left->data)
  {
   root->left =  leftrotation(root->left);
   return  rightrotation(root);
  }
  // Right Left Case
  else if(balance<-1 && key<root->right->data)
  {
   root->right =  rightrotation(root->right);
   return  leftrotation(root);
  }
  // Unbalancing
  else
  {
    return root;
  }
};

void preorder(Node *root)
{
    if(!root)
    return;


  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);

} 
int main()
{
    // Duplicate elements are not allowed

    Node *root = NULL;

    root = insert(root,20);
    root = insert(root,200);
    root = insert(root,220);
    root = insert(root,120);
    root = insert(root,2);
    root = insert(root,230);
    root = insert(root,202);
    root = insert(root,201);
    root = insert(root,209);
    root = insert(root,205);

    cout<<" preorder : "<<endl;
    preorder(root);
}