#include<bits/stdc++.h>
using namespace std;

int main(){
    string question;
    question="bbbbb";
    // cin>>question;

    vector<int> storage(256,0);

    int char_count=0;
    int repeatation_count=0;
    int answer;

    for(int i=0;i<question.length();i++){
        if(storage[int(question[char_count])]!=0){
            repeatation_count++;
        }
        storage[int(question[char_count])]++;
        char_count++;
        answer=max(char_count-repeatation_count-1,answer);
    }

    cout<<"The longest substring without repetation is of size::"<<answer;



    return 0;
}