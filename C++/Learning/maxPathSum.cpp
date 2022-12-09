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

int maxPathSumUtility(node* root,int &answer){
    
    if(root == NULL){
        return 0;
    }

    int left_max_sum = maxPathSumUtility(root->left,answer);
    int right_max_sum = maxPathSumUtility(root->right,answer);

    int nodeMax = max(max(root->data, root->data + left_max_sum + right_max_sum),
                      max(root->data + left_max_sum, root->data + right_max_sum));
    answer = max(answer,nodeMax);
    int singlePathSum =max(root->data,max(root->data + left_max_sum, root->data + right_max_sum));
    return singlePathSum;

}

int maximumPathSum(node* root){
    int answer=INT_MIN;
    maxPathSumUtility(root,answer);
    return answer;
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

    
    cout<<maximumPathSum(root);


    return 0;
}