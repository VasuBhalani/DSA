#include<iostream>
using namespace std ;
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
//this height is count no of node for edge we only subtract one from final
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
//no of node in tree
int size(node * root)
{
    if(root==nullptr)
    {
        return 0;
    }
     int ls=size(root->left);
     int rs=size(root->right);

    return 1+ls+rs;
}
int main()
{
    node* root=nullptr;
    root=binarytree(root);
    int h=height(root);
    cout<<"Height of b.t is : "<<h;
    cout<<"\nSize of b.t is : "<<size(root)<<endl;
return 0;
}