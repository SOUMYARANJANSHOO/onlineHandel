#include<bits/stdc++.h>
using namespace std;

class Stack{
    int length;
    queue<int> queue1;
    queue<int> queue2;
public:
    Stack(){
        length=0;
    }

    void push(int value){
        queue2.push(value);
        length++;
        while(!queue1.empty()){
            queue2.push(queue1.front());
            queue1.pop();
        }
        swap(queue1,queue2);
    }

    int pop(){

        if(queue1.empty()){
            cout<<"Stack underflow"<<endl;
            return -1;
        }

        int top = queue1.front();
        queue1.pop();
        length--;
        return top;
    }

    int top(){
        if(queue1.empty()){
            cout<<"Stack underflow"<<endl;
            return -1;
        }

        return queue1.front();
    }

    bool empty(){
        if(queue1.empty()){
            return true;
        }return false;
    }

    int size(){
        return length;
    }


};


int main(){
    
    Stack st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    st.push(6);
    cout<<st.empty()<<endl;

    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;
    cout<<st.pop()<<endl;

    cout<<st.empty()<<endl;

    return 0;
}