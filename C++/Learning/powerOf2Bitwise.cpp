#include<bits/stdc++.h>
using namespace std;

bool powerOf2(int x){
    return (x && !(x & x-1));
}

int main(){
    int n;
    cout<<"ENTER THE NUMBER::";
    cin>> n;

    if(powerOf2(n)){
        cout<<"THE ENTERED NUMBER IS A POWER OF TWO";
    }else{
        cout<<"THE ENTERED NUMBER IS NOT A POWER OF TWO";
    }
    return 0;
}