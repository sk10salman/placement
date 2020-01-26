#include<bits/stdc++.h>
#include<iostream>
using namespace std;
struct BT
{
     int data;
     struct BT *left,*right;
};
struct BT *create(int data)
{
        struct BT* node = (struct BT*)malloc(sizeof(struct BT));
        node->data=data;
        node->left=NULL;
        node->right=NULL;
       return node;
}
void print(struct BT *root)
{
   if(root)
    {
       print(root->left);
       print(root->right);
       cout<<root->data<<" ";
         
       
  
    }
}
int main()
{
    struct BT* root = create(1);
    root->left =  create(2);
    root->right =  create(3);
    root->left->left = create(4);
    root->left->right =  create(5);
      root->right->left =  create(6);
      root->right->right =  create(7);
    print(root);
    return 0;
}

