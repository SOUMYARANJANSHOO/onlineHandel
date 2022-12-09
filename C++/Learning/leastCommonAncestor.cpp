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

bool getPath(node* root,int key,vector<int>&path){

    if(root==NULL){
        return false;
    }

    path.push_back(root->data);
    if(root->data == key){
        return true;
    }

    if(getPath(root->left,key,path) || getPath(root->right,key,path)){
        return true;
    }

    path.pop_back();
    return false;

}

int leastCommonAncestor(node* root,int key1,int key2){

    vector<int>path1,path2;

    if(!getPath(root,key1,path1) || !getPath(root,key2,path2)){
        return -1;
    } 

    // for(auto i: path1){
    //     cout<<i<<" ";
    // }cout<<endl;
    // for(auto i: path2){
    //     cout<<i<<" ";
    // }cout<<endl;

    int path_change;
    for(path_change=0;path_change<min(path1.size(),path2.size());path_change++){
        if(path1[path_change] != path2[path_change]){
            break;
        }
    }
    return path1[path_change-1];
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

    cout<<leastCommonAncestor(root1,5,7)<<endl;

    return 0;
}