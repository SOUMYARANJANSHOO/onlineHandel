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

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

void deletion(node* &head,int key){
    node* temp=head;
    node* todelete;

    if(head==NULL){
        cout<<":;NO ELEMENTS IN THE LINKED LIST::";
        return;
    }
    if(temp->data==key){
        todelete=head;
        head=temp->next;
        delete todelete;
        return;
    }

    while(temp!=NULL){
        if(temp->next->data==key){
            todelete=temp->next;
            temp->next=temp->next->next;
            delete todelete;
            return;
        }
        temp=temp->next;
    }
    
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }return false;
}

void reverseByLoop(node* &head){
    node* current=head;
    node* before=NULL;
    node* after;

    while(current!=NULL){
        after=current->next;
        current->next=before;
        before=current;
        current=after;
    }head=before;

}

void reverseByRecursion(node* &head){
    if(head==NULL || head->next==NULL){
        return;
    }

    reverseByRecursion(head->next);
    head->next->next=head;
    head->next=NULL;

    
}

int main(){
    node* head=NULL;
    for(int i=1;i<4;i++){
        insertAtTail(head,i);
    }
    //display(head);
    insertAtHead(head,4);
    //display(head);

    //cout<<search(head,3)<<endl;
    //cout<<search(head,5)<<endl;

    // display(head);
    // deletion(head,4);
    // display(head);

    // display(head);
    // reverseByLoop(head);
    // display(head);

    display(head);
    reverseByLoop(head);
    display(head);


    
    return 0;
}