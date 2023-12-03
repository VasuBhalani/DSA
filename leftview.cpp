#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node
{
    public :
     int data;
     node * left;
     node  * right;
     node(int data)
     {
        this->data=data;
        this->left=nullptr;
        this->right=nullptr;
     }
};
node * binarytree(node * root)
{
    int data;
    cout<<"Enter the data : ";
    cin>>data;

    if(data==-1)
    {
        return nullptr;
    }
    
    root=new node(data);

    cout<<"Enter data in left of "<<data<<endl;
    root->left=binarytree(root->left);

     cout<<"Enter data in right of "<<data<<endl;
    root->right=binarytree(root->right);
    
    return root;
}
void leftview(node *root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=1;i<=n;i++)
        {
        
         node *cur=q.front();
         q.pop();
         
        if(cur!=nullptr&&i==1)
        cout<<cur->data<<" ";

        if(cur->left!=nullptr)
        {
            q.push(cur->left);
        }
        if(cur->right!=nullptr)
        {
            q.push(cur->right);
        }
      
      }
    }
} 

void rightview(node *root)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=1;i<=n;i++)
        {
        
         node *cur=q.front();
         q.pop();
         
        if(cur!=nullptr&&i==n)
        cout<<cur->data<<" ";

        if(cur->left!=nullptr)
        {
            q.push(cur->left);
        }
        if(cur->right!=nullptr)
        {
            q.push(cur->right);
        }
      
      }
    }
} 
int main()
{
    node* root=nullptr;
    root=binarytree(root);
    cout<<"Left view : ";
    leftview(root);
    cout<<"\nRight view : ";
    rightview(root);
    return 0;
}