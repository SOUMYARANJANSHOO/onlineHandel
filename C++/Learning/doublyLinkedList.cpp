#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int data;
        node* next;
        node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node* &head,int val){

    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head->prev=n;
    head=n;
}

void display(node* head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<"NULL"<<endl;
}

void search(node* head,int key){
    node* temp=head;
    int count=1;
    while(temp!=NULL){
        if(temp->data==key){
            cout<<"Postion of the element is::"<<count<<endl;
            return;
            //return true;
        }
        temp=temp->next;
        count++;
    }
    cout<<"The element is not present in the list"<<endl;
}

void deletionByKey(node* &head,int key){
    node* temp=head;
    if(head->data==key){
        head=head->next;
        delete temp;
        return;
    }

    while(temp!=NULL){
        if(temp->data==key){
            temp->prev->next=temp->next;
            if(temp->next!=NULL){
                temp->next->prev=temp->prev;
            }
            delete temp;
            return;
        }
        temp=temp->next;
    }
}

void deletionByPostn(node* &head,int postn){
    node* temp=head;
    int count=1;
    if(postn==1){
        head=head->next;
        delete temp;
        return;
    }

    while(temp!=NULL){
        if(count==postn){
            temp->prev->next=temp->next;
            if(temp->next!=NULL){
                temp->next->prev=temp->prev;
            }
            delete temp;
            return;
        }
        temp=temp->next;
        count++;
    }
}

int main(){
    node* head=NULL;
    for(int i=1;i<10;i++){
        insertAtTail(head,i);
    }
    insertAtHead(head,10);

    display(head);

    search(head,5);

    // deletionByKey(head,9);
    // deletionByPostn(head,1);

    // display(head);


    return 0;
}