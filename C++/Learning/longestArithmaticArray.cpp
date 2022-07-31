#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER::";
    cin>>n;
    int list[n];
    for(int i=0;i<n;++i){
        cout<<"ENTER A NUMBER::";
        int j;
        cin>>j;
        list[i]=j;
    }
    int cd,pcd=0,count=2,maxcount=2;
    for(int i=0;i<n-1;++i){
        cd=list[i]-list[i+1];
        if(cd==pcd){
            count+=1;
        }else{
            maxcount=max(maxcount,count);
            count=2;
        }pcd=cd;
    }
    cout<<"THE MAXIMUM LENGTH OF ARITHMATIC ARRAY IS::"<<maxcount;
    return 0;
}