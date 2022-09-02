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

void makeCycle(node* head,int postn){
    node* temp=head;
    node* cyclePostn;
    int count=1;

    while(temp->next!=NULL){
        if(count==postn){
            cyclePostn=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=cyclePostn;
}

bool detectCycle(node* head){
    node* fastPtr=head;
    node* slowPtr=head;
    
    while(fastPtr->next!=NULL && slowPtr!=NULL){
        fastPtr=fastPtr->next->next;
        slowPtr=slowPtr->next;

        if(fastPtr==slowPtr){
            return true;
        }

    }
    return false;

}

void removeCycle(node* head){
    node* fastPtr=head;
    node* slowPtr=head;
    while(fastPtr->next!=NULL && slowPtr!=NULL){
        fastPtr=fastPtr->next->next;
        slowPtr=slowPtr->next;

        if(fastPtr==slowPtr){
            break;
        }
    }
    fastPtr=head;
    while(fastPtr->next!=slowPtr->next){
        fastPtr=fastPtr->next;
        slowPtr=slowPtr->next;
    }
    slowPtr->next=NULL;
}

int main(){
    node* head=NULL;
    for(int i=1;i<10;i++){
        insertAtTail(head,i);
    }

    makeCycle(head,4);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    display(head);
    
    return 0;
}