#include<iostream>
using namespace std;

int fibb(int x){
    if(x==1 || x==0){
        return x;
    }else{
        return fibb(x-1)+fibb(x-2);
    }
}

int main(){
    int n;
    cout<<"ENTER A NUMBER::";
    cin>>n;
    
    for(int i=0;i<n;++i){
        cout<<fibb(i)<<endl;
    }
    
    return 0;
}