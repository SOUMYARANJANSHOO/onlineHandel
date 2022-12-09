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

node* leastCommonAncestor(node* root,int key1,int key2){

    if(root==NULL){
        return NULL;
    }

    if(root->data == key1 || root->data == key2){
        return root;
    }

    node* left_Ancestor=leastCommonAncestor(root->left,key1,key2);
    node* right_Ancestor=leastCommonAncestor(root->right,key1,key2);

    if(left_Ancestor!=NULL && right_Ancestor!=NULL){
        return root;
    }
    if(left_Ancestor==NULL && right_Ancestor==NULL){
        return NULL;
    }
    if(left_Ancestor!=NULL){
        return left_Ancestor;
    }return right_Ancestor;
}

int findDistance(node* root,int key,int distance){
    
    if(root==NULL){
        return -1;
    }

    if(root->data == key){
        return distance;
    }

    int left_side=findDistance(root->left,key,distance+1);
    if(left_side!=-1){
        return left_side;
    }return findDistance(root->right,key,distance+1);

}

int distanceBetweenNodes(node* root,int key1,int key2){

    node* least_common_ancestor=leastCommonAncestor(root,key1,key2);

    int distance1=findDistance(least_common_ancestor,key1,0);
    int distance2=findDistance(least_common_ancestor,key2,0);

    return distance1+distance2;

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

    cout<<distanceBetweenNodes(root1,5,7);

    return 0;
}