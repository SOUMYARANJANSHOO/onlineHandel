#include<bits/stdc++.h>
using namespace std;
//By default area size is taken as 2*n and tile size is 2*1
int tillingCount(int column){
    if(column==1){
        return 1;
    }
    if(column==0){
        return 0;
    }

    return tillingCount(column-1) + tillingCount(column-2);
}

int main(){
    cout<<tillingCount(4)<<endl;
    return 0;
}