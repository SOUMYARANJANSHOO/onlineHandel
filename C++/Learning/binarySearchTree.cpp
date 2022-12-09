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

void binarySearchTree(node* &head,int value){
    if(head==NULL){
        head = new node(value);
        return;
    }
    if(head->data > value){
        binarySearchTree(head->left,value);
        return;
    }
    else{
        binarySearchTree(head->right,value);
        return;
    }
}

bool searchInBST(node* root, int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        return true;
    }
    if(root->data > key){
        return searchInBST(root->left,key);
    }
    else{
        return searchInBST(root->right,key);
    }
    return false;
}

void inorder(node* head){

    if(head == NULL){
        return;
    }

    inorder(head->left);
    cout<<head->data<<" ";
    inorder(head->right);

}


int main(){
    
    int question_array[6] = {5,1,3,4,2,7};
    // int size;
    // cout<<"Enter the number of entries::";
    // cin>>size;
    // for(int i=0;i<size;i++){
    //     int value;
    //     cin>>value;
    //     question_array.push_back(value);
    // }


    node* head=NULL;
    for(auto i : question_array){
        // cout<<i<<" ";
        binarySearchTree(head,i);
    }

    inorder(head);
    cout<<endl;

    cout<<searchInBST(head,2);


    return 0;
}