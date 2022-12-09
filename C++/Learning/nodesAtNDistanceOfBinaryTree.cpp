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

void printSubtreeNodes(node* root,int step){

    if(root==NULL || step<0){
        return;
    }

    if(step==0){
        cout<<root->data<<" ";
        return;
    }

    printSubtreeNodes(root->left,step-1);
    printSubtreeNodes(root->right,step-1);
}

int printNodeAtTarget(node* root,int target,int step){

    if(root == NULL){
        return -1;
    }

    if(root->data == target){
        printSubtreeNodes(root,step);
        return 0;
    }

    int left_distance = printNodeAtTarget(root->left,target,step);
    if(left_distance!=-1){
        if(left_distance+1 == step){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->right,step-left_distance-2);
        }
        return left_distance+1;
    }
    
    int right_distance = printNodeAtTarget(root->right,target,step);
    if(right_distance != -1){
        if(left_distance+1 == step){
            cout<<root->data<<" ";
        }else{
            printSubtreeNodes(root->right,step-left_distance-2);
        }
        return right_distance+1;
    }

    return -1;
}

/*

     1
   /   \
  5     2
 /     / \
6     3   4
 \
  7
 / \ 
8   9
*/

int main(){

    node* root=new node(1);
    root->left=new node(5);
    root->left->left=new node(6);
    root->left->left->right=new node(7);
    root->left->left->right->left=new node(8);
    root->left->left->right->right=new node(9);
    root->right=new node(2);
    root->right->left=new node(3);
    root->right->right=new node(4);

    
    printNodeAtTarget(root,5,3);


    return 0;
}