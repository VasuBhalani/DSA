#include<iostream>
using namespace std;

class node {
public:
    node* left;
    node* right;
    int data;
    node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node* binarytree(node* root) {
      int data;
      cout<<"data : ";
      cin>>data;
      if(data==-1)
      {
        return nullptr;
      }
      
      root=new node(data);

      cout<<"Enter the data of the left of "<<data << " is \n";
      root->left=binarytree(root->left);
      
      cout<<"Enter the data of the right of "<<data << " is ";
      root->right=binarytree(root->right);
    
      return root;
}

node* inprint(node* root) {
    if (root == nullptr) {
        return nullptr;
    }

    root->left = inprint(root->left);
    cout << root->data << " ";
    root->right = inprint(root->right);
      

    return root;
 }
node* postprint(node* root) {
    if (root == nullptr) {
        return nullptr;
    }

    root->left =postprint(root->left);
 
    root->right = postprint(root->right);
       cout << root->data << " ";

    return root;
}
node* preprint(node* root) {
    if (root == nullptr) {
        return nullptr;
    }
  cout << root->data << " ";

    root->left =preprint(root->left);
 
    root->right = preprint(root->right);
     
    return root;
}
int main() {
    node* root = nullptr;
    root = binarytree(root);
    preprint(root);    
    cout << "\nThis is prepared by 22cs009" << endl;
    return 0;
}
