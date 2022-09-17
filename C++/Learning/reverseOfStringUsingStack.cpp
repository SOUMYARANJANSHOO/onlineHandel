#include<bits/stdc++.h>
using namespace std;

void reverseString(string s){
    stack<string> st;

    string word;
    for(int i=0;i<=s.length();i++){
        if(s[i] ==' ' || i==s.length()){
            st.push(word);
            word="";
            continue;
        }
        word+=s[i];
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    
    string sentence;
    // cout<<"ENTER THE SENTENCE::";
    // getline(cin,sentence);
    sentence="hello, how are you?";

    reverseString(sentence);

    return 0;
}