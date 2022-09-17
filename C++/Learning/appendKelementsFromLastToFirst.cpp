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

void appendKnodes(node* &head,int postn){
    node* newTail;
    node* connector=head;
    int count=1;

    while(connector->next!=NULL){
        if(count==postn){
            newTail=connector;
        }
        connector=connector->next;
        count++;
    }
    connector->next=head;
    head=newTail->next;
    newTail->next=NULL;
}

int main(){

    node* head=NULL;

    for(int i=1;i<7;i++){
        insertAtTail(head,i);
    }
    
    display(head);

    appendKnodes(head,3);

    display(head);

    return 0;
}