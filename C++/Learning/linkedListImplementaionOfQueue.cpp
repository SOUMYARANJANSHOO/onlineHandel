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

class Queue{
    node* front;
    node* back;
    
    public:
    Queue(){
        front=NULL;
        back=NULL;
    }

    void enqueue(int val){
        node* temp= new node(val);
        if(front==NULL){
            front=temp;
            back=temp;
            return;
        }back->next=temp;
        back=back->next;
    }

    void dequeue(){
        if(front==NULL){
            cout<<"Queue Underflow"<<endl;
            return;
        }node* to_delete=front;
        front=front->next;
        delete to_delete;
    }

    void peek(){
        if(front==NULL){
            cout<<"Empty"<<endl;
        }cout<<front->data<<endl;
    }

    bool empty(){
        if(front==NULL){
            return true;
        }return false;
    }

};

int main(){
    
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    
    q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    q.dequeue();
    q.dequeue();

    q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    return 0;
}