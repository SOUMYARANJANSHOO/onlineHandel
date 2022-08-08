#include<bits/stdc++.h>
using namespace std;

void subsets(int n,int array[]){
    for(int i=0;i<(1<<n);i++){
        cout<<"{";
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<array[j]<<" ";
            }
        }cout<<"}"<<endl;
    }
}

int main(){
    int n;
    cout<<"ENTER THE LENGTHE OF THE ARRAY::";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE VALUE::";
        cin>>array[i];
    }
    subsets(n,array);
    return 0;
}