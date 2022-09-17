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

void oddToEvenSort(node* head){    
    node* oddPtr=head;
    node* evePtr=head->next;
    node* evenHead=head->next;

    while(oddPtr->next!=NULL && evePtr->next!=NULL){
        oddPtr->next=evePtr->next;
        oddPtr=oddPtr->next;
        evePtr->next=oddPtr->next;
        evePtr=evePtr->next;
    }
    
    oddPtr->next=evenHead;
    if(oddPtr->next==NULL){
        evePtr->next=NULL;
    }

}


int main(){
    
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);

    display(head);

    oddToEvenSort(head);

    display(head);

    return 0;
}