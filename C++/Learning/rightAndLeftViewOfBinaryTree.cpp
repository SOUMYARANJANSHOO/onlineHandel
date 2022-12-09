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

void rightView(node* root){

    if(root==NULL){
        return;
    }

    queue<node*> storage;
    storage.push(root);

    while(!storage.empty()){
        int current_level_size=storage.size();
        for(int i=1;i<=current_level_size;i++){
            node* temp_pointer=storage.front();
            storage.pop();
            if(i==current_level_size){
                cout<<temp_pointer->data<<" ";
            }
            if(temp_pointer->left!=NULL){
                storage.push(temp_pointer->left);
            }
            if(temp_pointer->right!=NULL){
                storage.push(temp_pointer->right);
            }
        }
    }
}

void leftView(node* root){

    if(root==NULL){
        return;
    }

    queue<node*> storage;
    storage.push(root);


    while(!storage.empty()){
        
        int current_level_size=storage.size();
        for(int i=1;i<=current_level_size;i++){
            node* temp_pointer=storage.front();
            storage.pop();
            if(i==1){
                cout<<temp_pointer->data<<" ";
            }
            if(temp_pointer->left!=NULL){
                storage.push(temp_pointer->left);
            }
            if(temp_pointer->right!=NULL){
                storage.push(temp_pointer->right);
            }
        }
    }
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

    rightView(root1);
    cout<<endl;
    rightView(root2);
    cout<<endl;
    leftView(root1);
    cout<<endl;
    leftView(root2);

    return 0;
}