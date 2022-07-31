#include<iostream>
using namespace std;

int fact(int x){
    if (x==1){
        return 1;
    }else{
        return x*fact(x-1);
    }
}

int main(){
    int n,r;
    cout<<"ENTER n::";
    cin>>n;
    cout<<"ENTER r::";
    cin>>r;
    
    cout<<"THE FACTORIAL OF THE NUMBER IS ::"<<fact(n)/(fact(n-r)*fact(r));
    
    return 0;
}