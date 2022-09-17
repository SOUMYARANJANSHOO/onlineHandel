#include<bits/stdc++.h>
using namespace std;

int precedence(char optr){
    if(optr=='^'){
        return 3;
    }else if(optr=='*' || optr=='/'){
        return 2;
    }else if(optr=='+' || optr=='-'){
        return 1;
    }else{
        return 0;
    }
}

string infixToPostfix(string infixStr){

    string postfixStr="";
    stack <char> storage;

    for(int i=0;i<infixStr.length();i++){
        if((infixStr[i]>='a' && infixStr[i]>='z') || infixStr[i]>='A' && infixStr[i]>='Z'){
            postfixStr += infixStr[i];
        }else if(infixStr[i]=='('){
            storage.push(infixStr[i]);
        }
        else if(infixStr[i]==')'){
            while(!storage.empty() && storage.top()!='('){
                postfixStr += storage.top();
                storage.pop();
            }
            if(!storage.empty()){
                storage.pop();
            }
        }else{
            while(!storage.empty() && precedence(infixStr[i])<= precedence(storage.top())){
                postfixStr += storage.top();
                storage.pop();
            }
            storage.push(infixStr[i]);
        }
    }

    while(!storage.empty()){
        if(storage.top()=='('){
            storage.pop();
            continue;
        }
        postfixStr += storage.top();
        storage.pop();
    }

    return postfixStr;
}

string infixToPrefix(string infixStr){
    
    reverse(infixStr.begin(),infixStr.end());

    for(int i=0;i<infixStr.length();i++){
        if(infixStr[i]=='('){
            infixStr[i]=')';
            continue;
        }
        if(infixStr[i]==')'){
            infixStr[i]='(';
            continue;
        }
    }

    string prefixStr=infixToPostfix(infixStr);

    reverse(prefixStr.begin(),prefixStr.end());

    return prefixStr;
}

int main(){

    string question="(a-b/c)*(a/k-l)";

    // string result1=infixToPostfix(question);

    // cout<<result1;

    string result2=infixToPrefix(question);

    cout<<result2;
    
    return 0;
}