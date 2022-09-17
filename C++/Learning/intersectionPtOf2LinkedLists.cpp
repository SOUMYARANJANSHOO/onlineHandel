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

int length(node* head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void intersect(node* &head1,node* &head2,int postn){
    node* temp1=head1;
    node* temp2=head2;
    while(postn){
        temp1=temp1->next;
        postn--;
    }
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int intersection(node* head1,node* head2){
    
    node* temp1=head1;
    node* temp2=head2;
    int length1=length(head1);
    int length2=length(head2);
    int lengthDiff;

    if(length1>=length2){
        lengthDiff=length1-length2;
        while (lengthDiff!=0){
            temp1=temp1->next;
            if(temp1==NULL){
                return -1;
            }
            lengthDiff--;
        }
    }else{
        lengthDiff=length2-length1;
        while (lengthDiff!=0){
            temp2=temp2->next;
            if(temp2==NULL){
                return -1;
            }
            lengthDiff--;
        }
    }

    while(temp1->data!=temp2->data){
        temp1=temp1->next;
        temp2=temp2->next;
        if(temp1==NULL || temp2==NULL){
            return -1;
        }
    }

    return temp1->data;   

}

int main(){

    node* head1=NULL;
    node* head2=NULL;
    for(int i=1;i<=6;i++){
        insertAtTail(head1,i);
    }
    insertAtTail(head2,9);
    insertAtTail(head2,10);
    intersect(head1,head2,3);

    display(head1);
    display(head2);

    cout<<intersection(head1,head2);


    return 0;
}