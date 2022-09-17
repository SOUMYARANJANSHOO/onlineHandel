#include<bits/stdc++.h>
using namespace std;

#define n 100

class Queue{
    int* arr;
    int front , back;
    public:
    Queue(){
        arr=new int[n];
        front = back = -1;
    }
    void enqueue(int val){
        if(back==n-1){
            cout<<"Oueue Overflow"<<endl;
        }else{
            back++;
            arr[back]=val;
            if(front==-1){
                front++;
            }
        }
    }
    void dequeue(){
        if(front==-1 || front>back){
            cout<<"Queue Underflow"<<endl;
        }else{
            front++;
        }
    }
    void peek(){
        if(front>back){
            cout<<"Empty queue"<<endl;
        }else{
            cout<<arr[front]<<endl;
        }
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        return false;
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