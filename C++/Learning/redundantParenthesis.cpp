#include<bits/stdc++.h>
using namespace std;

int main(){
    string question="(a+(a+b))";

    stack<char> storage;

    int redundant=0;

    for(int i=0;i<question.length();i++){
        if(question[i]=='('){
            storage.push('(');
        }else if(question[i]=='+' || question[i]=='-' || question[i]=='/' || question[i]=='*'){
            storage.push(question[i]);
        }else if(question[i]==')'){
            if(storage.top()=='('){
                redundant++;
                storage.pop();
                continue;
            }
            while(!storage.empty() && storage.top()!='('){
                storage.pop();
            }storage.pop();
        }else{
            continue;
        }

    }
    
    cout<<"The number of reductant is::"<<redundant;

    return 0;
}