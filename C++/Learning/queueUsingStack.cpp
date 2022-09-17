#include<bits/stdc++.h>
using namespace std;

/*
There are 2 methods to do the task.
Firstly we can use two user declared stacks s1 and s2(all the commented parts belongs to the first method and peek and dequeue function merges)
or
Secondly we can use the call stack and use recussion along with one user declared stack
*/



class Queue{
    stack <int> s1;
    // stack <int> s2;
public:
    void enqueue(int value){
        s1.push(value);
    }

    int dequeue(){
        if(s1.empty() /*&& s2.empty()*/){
            cout<<"Queue Underflow"<<endl;
            return -1;
        }
        // if(s2.empty()){
        //     while(!s1.empty()){
        //         s2.push(s1.top());
        //         s1.pop();
        //     }
        // }
        // s2.pop();

        int temp=s1.top();
        s1.pop();
        if(s1.empty()){
            return temp;
        }
        int item = dequeue();
        s1.push(temp);
        return item;

    }

    // void peek(){
    //     if(s1.empty() /*&& s2.empty()*/){
    //         cout<<"Queue is empty"<<endl;
    //         return;
    //     }
        // if(s2.empty()){
        //     while(!s1.empty()){
        //         s2.push(s1.top());
        //         s1.pop();
        //     }
        // }
        // cout<<s2.top()<<endl;
    // }

    bool empty(){
        if(s1.empty() /*&& s2.empty()*/){
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
    
    // q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    // q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    // q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;

    // q.peek();
    cout<<q.empty()<<endl;
    cout<<endl;

    return 0;
}   