/*
This is an incomplete program..It doesnt works..
*/


#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
    
    node(int val){
        data=val;
        next=NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}



void reverseK(node* &head,int key,node* previousPtr=NULL){
    node* currentPtr=head;
    node* nextPtr;

    if(currentPtr->next!=NULL){
        nextPtr=currentPtr->next;
        previousPtr->next=nextPtr;
        currentPtr->next=nextPtr->next;
        nextPtr->next=currentPtr;
        head=nextPtr;
        for(int i=0;i<key;i++){
            previousPtr=currentPtr;
            currentPtr=nextPtr;
            nextPtr=nextPtr->next;
        }
    }
    reverseK(currentPtr,2,previousPtr);
}

int main(){
    node* head=NULL;
    for(int i=0;i<6;i++){
        insertAtTail(head,i);
    }

    display(head);
    reverseK(head,2);
    display(head);

    return 0;
}