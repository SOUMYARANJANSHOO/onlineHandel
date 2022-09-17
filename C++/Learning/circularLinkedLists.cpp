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
    node* n=new node(val);

    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}

void insertAtHead(node* &head,int val){
    node* n=new node(val);

    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next=head;
    temp->next=n;
    head=n;
}

void display(node* head){

    if(head==NULL){
        cout<<"EMPTY LINKED LIST"<<endl;
        return;
    }

    node* temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    
    cout<<"HEAD"<<endl;
}

void deletion(node* &head,int key){
    if(head->next==head){
        if(head->data==key){
            head=NULL;
        }
        return;
    }
    node* temp=head;
    while(temp->next->data!=key){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
    
    node* head=NULL;
    for(int i=1;i<10;i++){
        insertAtTail(head,i);
    }
    insertAtHead(head,10);

    display(head);
    deletion(head,5);
    display(head);

    return 0;
}