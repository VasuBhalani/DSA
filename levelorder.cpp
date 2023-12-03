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
int height(node * root)
{
    if(root==nullptr)
    {
        return 0;
    }
    int lh=height(root->left);
     int rh=height(root->right);

    return 1+max(lh,rh);
}
void levelorder(node * root,int level)
{
    if(root==nullptr)
    return ;
    if(level==1)
    cout<<root->data<<" ";
    else if(level>1)
    {
        levelorder(root->left,level-1);
        levelorder(root->right,level-1);
    }
}
void levelorderbyq(node* root)
{
    queue<node*>q;
    q.push(root);
    q.push(nullptr);
    while(!q.empty())
    {
         node *cur=q.front();
         q.pop();
         if(cur==nullptr)
         {
            if(q.empty())
            return ;
            q.push(nullptr);
            cout<<endl;
            continue;
         }
         
         if(cur!=nullptr)
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
int main()
{
    node* root=nullptr;
    root=binarytree(root);
    int h=height(root);
    cout<<"Height of b.t is : "<<h<<endl;
    for(int i=1;i<=h;i++)
    {
        levelorder(root,i);
        cout<<endl;
    }
    cout<<endl;
   // levelorderbyq(root);

    return 0;
}