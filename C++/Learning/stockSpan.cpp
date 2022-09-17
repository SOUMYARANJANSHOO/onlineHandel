#include<bits/stdc++.h>
using namespace std;

vector<int> stockSpan(vector<int> question){
    vector<int> answer;

    stack<pair<int,int>> storage;

    for(auto price : question){
        int days=1;
        while(!storage.empty() && storage.top().first<=price){
            days += storage.top().second;
            storage.pop();
        }
        storage.push(make_pair(price,days));
        answer.push_back(days);
    }

    return answer;
}

int main(){

    vector<int> question={100,80,60,70,60,75,85};

    vector<int> stock_span=stockSpan(question);

    for(auto i : stock_span){
        cout<<i<<" ";
    }cout<<endl;
    
    return 0;
}