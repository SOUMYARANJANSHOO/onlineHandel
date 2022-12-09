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

int calculateHeight(node* root){

    if(root==NULL){
        return 0;
    }

    int left_height=calculateHeight(root->left);
    int right_height=calculateHeight(root->right);

    return max(left_height,right_height)+1;

}

int calculateDiameter(node* root){
    
    if(root==NULL){
        return 0;
    }

    int left_height=calculateHeight(root->left);
    int right_height=calculateHeight(root->right);
    int current_diameter=left_height+right_height+1;

    int left_diameter=calculateDiameter(root->left);
    int right_diameter=calculateDiameter(root->right);

    return max(current_diameter,max(left_diameter,right_diameter));

}

int calculateDiametereOptimised(node* root,int* height){

    if(root==NULL){
        *height=0;
        return 0;
    }

    int left_height=0,right_height=0;
    int left_diameter=calculateDiametereOptimised(root->left,&left_height);
    int right_diameter=calculateDiametereOptimised(root->right,&right_height);

    int current_diameter=left_height+right_height+1;
    *height=max(left_height,right_height)+1;

    return max(current_diameter,max(left_diameter,right_diameter));

}


/*
     1
   /   \
  2     3
 / \   / \
4   5 6   7
*/
int main(){
    
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<calculateHeight(root)<<endl;

    cout<<calculateDiameter(root)<<endl;
    
    int height=0;
    cout<<calculateDiametereOptimised(root,&height)<<endl;

    return 0;
}