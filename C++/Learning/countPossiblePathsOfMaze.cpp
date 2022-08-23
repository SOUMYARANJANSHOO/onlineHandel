#include<bits/stdc++.h>
using namespace std;

int countPath(int sideLength,int row, int column){
    
    if(row==sideLength-1 && column==sideLength-1){
        return 1;
    }
    if(row>=sideLength || column>=sideLength){
        return 0;
    }

    return countPath(sideLength,row+1,column)+countPath(sideLength,row,column+1);
}

int main(){
    cout<<countPath(3,0,0);
    return 0;
}