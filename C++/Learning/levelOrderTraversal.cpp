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

void printLevelOrder(node* root){
    if(root==NULL){
        return;
    }

    queue<node*> storage;
    storage.push(root);
    storage.push(NULL);

    while(!storage.empty()){
        node* front=storage.front();
        storage.pop();
        if(front != NULL){
            cout<<front->data<<" ";
            if(front->left){
                storage.push(front->left);
            }
            if(front->right){
                storage.push(front->right);
            }
        }else if(!storage.empty()){
            storage.push(NULL);
        }
    }
}

int sumAtLevel(node* root,int given_level){

    if(root==NULL){
        return -1;
    }

    queue<node*> storage;
    storage.push(root);
    storage.push(NULL);

    int current_level=0;
    int sum=0;

    while(!storage.empty()){
        if(current_level>given_level){
            break;
        }
        node* front=storage.front();
        storage.pop();
        if(front!=NULL){
            if(current_level==given_level){
                sum+=front->data;
            }
            if(front->left){
                storage.push(front->left);
            }
            if(front->right){
                storage.push(front->right);
            }
        }else if(!storage.empty()){
            storage.push(NULL);
            current_level++;
        }
    }

    return sum;
}

int countNumberOfNodes(node* root){
    if(root==NULL){
        return 0;
    }
    return countNumberOfNodes(root->left) + countNumberOfNodes(root->right) + 1;
}

int sumOfAllNodes(node* root){
    if(root==NULL){
        return 0;
    }
    return sumOfAllNodes(root->left) + root->data + sumOfAllNodes(root->right);
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

    printLevelOrder(root);//1 2 3 4 5 6 7
    cout<<endl;

    cout<<sumAtLevel(root,1);//5
    cout<<endl;

    cout<<countNumberOfNodes(root);//7
    cout<<endl;

    cout<<sumOfAllNodes(root);//28

    return 0;
}