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

void inorderTraversal(node* root){
    
    if(root==NULL){
        return;
    }
    
    inorderTraversal(root->left);
    cout<<root->data<<" ";
    inorderTraversal(root->right);
}

int search(int inorder[],int start,int end,int current){
    for(int i=start;i<=end;i++){
        if(inorder[i]==current){
            return i;
        }
    }return -1;
}

node* buildTreeFromPreorder(int preorder[],int inorder[],int start,int end){

    static int preorder_index=0;

    if(start>end){
        return NULL;
    }

    int current=preorder[preorder_index];
    preorder_index++;

    node* root=new node(current);
    if(start==end){
        return root;
    }
    int current_index=search(inorder,start,end,current);
    root->left=buildTreeFromPreorder(preorder,inorder,start,current_index-1);
    root->right=buildTreeFromPreorder(preorder,inorder,current_index+1,end);

    return root;
}

node* buildTreeFromPostorder(int postorder[],int inorder[],int start,int end){

    static int postorder_index=end;

    if(start>end){
        return NULL;
    }

    int current=postorder[postorder_index];
    postorder_index--;

    node* root=new node(current);
    if(start==end){
        return root;
    }
    int current_index=search(inorder,start,end,current);
    root->right=buildTreeFromPostorder(postorder,inorder,current_index+1,end);
    root->left=buildTreeFromPostorder(postorder,inorder,start,current_index-1);

    return root;
}

int main(){
    
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};

    node* root1=buildTreeFromPreorder(preorder,inorder,0,4);
    inorderTraversal(root1);

    cout<<endl;

    node* root2=buildTreeFromPostorder(postorder,inorder,0,4);
    inorderTraversal(root2);

    return 0;
}