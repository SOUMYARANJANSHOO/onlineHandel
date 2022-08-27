#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
    int arr[8]={10,16,7,14,5,3,2,9};
    vector < pair<int,int> > victor;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        victor.push_back(make_pair(arr[i],i));
    }
    sort(victor.begin(),victor.end(),compare);
    for(int i=0;i<victor.size();i++){
        arr[victor[i].second]=i;
    }
    for(int i=0;i<victor.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}