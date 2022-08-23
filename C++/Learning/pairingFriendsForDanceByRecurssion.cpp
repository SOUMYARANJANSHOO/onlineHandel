#include<bits/stdc++.h>
using namespace std;

int pairing(int number){

    if(number==0 || number==1 || number==2){
        return number;
    }

    return pairing(number-1) + pairing(number-2)*(number-1);
}

int main(){
    cout<<pairing(4)<<endl;
    return 0;
}