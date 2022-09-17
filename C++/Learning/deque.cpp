#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_back(5);
    dq.push_back(1);
    dq.push_back(3);
    dq.push_front(4);
    dq.push_front(2);

    for(auto i : dq){
        cout<<i<<" ";

    }cout<<endl;

    return 0;
}