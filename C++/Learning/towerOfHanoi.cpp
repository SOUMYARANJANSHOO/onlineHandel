#include<bits/stdc++.h>
using namespace std;

void toh(int n,char from,char to,char helper){
    if(n==0){
        return;
    }
    toh(n-1,from,helper,to);
    cout<<"Move a disk from "<<from<<" to "<<to<<endl;
    toh(n-1,helper,to,from);
}

int main(){
    toh(3,'A','C','B');
    return 0;
}