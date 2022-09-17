#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
    stack <char> storage;

    for(int i=0;i<str.length();i++){
        if(str[i]=='(' || str[i]=='{' || str[i]=='['){
            storage.push(str[i]);
        }else if(str[i]==')'){
            if(storage.top()=='('){
                storage.pop();
            }
        }else if(str[i]=='}'){
            if(storage.top()=='{'){
                storage.pop();
            }
        }else if(str[i]==']'){
            if(storage.top()=='['){
                storage.pop();
            }
        }
    }

    return (storage.empty());
}

int main(){
    
    string str1="{[()]}";
    string str2="{[()}]";

    cout<<isBalanced(str1)<<endl;
    cout<<isBalanced(str2);

    return 0;
}