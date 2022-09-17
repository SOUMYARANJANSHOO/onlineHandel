#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
    int* arr;
    int Top;
    public:
    Stack(){
        arr=new int[n];
        Top=-1;
    }
    void push(int x){
        if(Top==n-1){
            cout<<"stack overflow condition"<<endl;
            return;
        }
        Top++;
        arr[Top]=x;
    }
    void pop(){
        if(Top==-1){
            cout<<"stack underflow condition"<<endl;
            return;
        }
        Top--;
    }
    int top(){
        if(Top==-1){
            cout<<"stack underflow condition"<<endl;
            return -1;
        }
        return arr[Top];
    }
    bool empty(){
        return Top==-1;
    }
};


int main(){
    
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<st.top()<<endl;

    st.pop();
    st.pop();
    st.pop();

    cout<<st.top()<<endl;

    st.pop();
    st.pop();

    cout<<st.top()<<endl;
    
    cout<<st.empty()<<endl;

    return 0;
}