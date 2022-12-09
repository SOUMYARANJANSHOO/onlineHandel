#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

void flatten(node* &root){

    if(root==NULL){
        return;
    }

    if(root->left != NULL){

        flatten(root->left);

        node* temp_rightNode = root->right;

        root->right=root->left;
        root->left=NULL;

        //getting the last node to join the right node from temp
        node* left_end=root->right;
        while(left_end->right != NULL){
            left_end=left_end->right;
        }

        left_end->right=temp_rightNode;
    }

    flatten(root->right);

}

void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

/*
tree1
     1
   /   \
  2     3
 / \   / \
4   5 6   7

tree2
     1
   /
  2
 /
4
*/

int main(){

    //balanced tree
    node* root1=new node(1);
    root1->left=new node(2);
    root1->right=new node(3);
    root1->left->left=new node(4);
    root1->left->right=new node(5);
    root1->right->left=new node(6);
    root1->right->right=new node(7);
    int height1=0;

    //not balanced
    node* root2=new node(1);
    root2->left=new node(2);
    root2->left->left=new node(4);
    int height2=0;

    preorder(root1);
    cout<<endl;
    flatten(root1);
    preorder(root1);
    cout<<endl;



    return 0;
}