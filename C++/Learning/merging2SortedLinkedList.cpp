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

node* mergeSortedWithLoop(node* head1,node* head2){
    node* dummyHead=new node(0);
    node* ptr1=head1;
    node* ptr2=head2;
    node* ptr3=dummyHead;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data <= ptr2->data){
            ptr3->next=ptr1;
            ptr3=ptr3->next;
            ptr1=ptr1->next;
        }else{
            ptr3->next=ptr2;
            ptr3=ptr3->next;
            ptr2=ptr2->next;
        }
    }
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr3=ptr3->next;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr3=ptr3->next;
        ptr2=ptr2->next;
    }
    ptr3->next=NULL;
    return dummyHead->next;

}

node* mergeSortedByRecursion(node* head1,node* head2){

    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }

    node* result;

    if(head1->data <= head2->data){
        result=head1;
        result->next=mergeSortedByRecursion(head1->next,head2);
    }else{
        result=head2;
        result->next=mergeSortedByRecursion(head1,head2->next);
    }
    return result;
}

int main(){

    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};

    for(int i=0;i<4;i++){
        insertAtTail(head1,arr1[i]);
    }
    display(head1);
    for(int i=0;i<3;i++){
        insertAtTail(head2,arr2[i]);
    }
    display(head2);

    node* newHead=mergeSortedByRecursion(head1,head2);

    display(newHead);

    return 0;
}