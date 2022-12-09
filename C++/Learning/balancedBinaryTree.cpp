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

int height(node* root){
    
    if(root==NULL){
        return 0;
    }

    return max(height(root->left),height(root->right))+1;
}

bool isBalanced(node* root){

    if(root==NULL){
        return true;
    }

    if(isBalanced(root->left)==false){
        return false;
    }
    if(isBalanced(root->right)==false){
        return false;
    }

    int left_height=height(root->left);
    int right_height=height(root->right);

    if(abs(left_height-right_height) <= 1){
        return true;
    }return false;

}

bool isBalancedOptimised(node* root,int* height){
    
    if(root==NULL){
        return true;
    }

    int left_height=0,right_height=0;

    if(isBalancedOptimised(root->left,&left_height)==false){
        return false;
    }
    if(isBalancedOptimised(root->right,&right_height)==false){
        return false;
    }

    *height=max(left_height,right_height)+1;
    if(abs(left_height-right_height) <= 1){
        return true;
    }return false;
    
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

    cout<<isBalanced(root1)<<endl;
    cout<<isBalanced(root2)<<endl;
    cout<<isBalancedOptimised(root1,&height1)<<endl;
    cout<<isBalancedOptimised(root2,&height2)<<endl;

    return 0;
}