#include<iostream>
using namespace std;
class node
{
 
 public:
 int data;
 node * left, * right;
 node(int data)
 {
    this->data=data;
    left=nullptr;
    right=nullptr;
 }

};
node * insert(node* root,int val)
{
    if(root==nullptr)
    return new node(val);

    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }else{
        root->right=insert(root->right,val);
    }
    return root;
}
void inorder(node *root)
{
    if(root==nullptr)
    return ;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main()
{
    node *root=nullptr;
    root=insert(root,5);
    insert(root,1);
    insert(root,4);
    insert(root,3);
    insert(root,2);
    insert(root,7);
    
    inorder(root);
    return 0;
}