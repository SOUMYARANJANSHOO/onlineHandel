#include<bits/stdc++.h>
using namespace std;

bool getBit(int num, int postn){
    return ((num & (1<<postn))!= 0);
}

int setBit(int num,int postn){
    return (num | (1<<postn));
}

int unique(int n, int array[]){
    int result=0;
    for(int i=0;i<=64;i++){
        //traversing from 0th bit to 64th
        int sum=0;
        for(int j=0;j<n;j++){
            //traversing from 0th postn to n-1 th
            if(getBit(array[j],i)){
                sum++;
            }
        }
        if(sum%3 != 0){
            result=setBit(result,i);
        }
    }
    return result;
}

int main(){
    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY::";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE VALUE::";
        cin>>array[i];
    }
    cout<<"THE UNIQUE ELEMENT IN THE ARRAY CONTAINING EVERY ELEMENT THRICE IS::"<<unique(n,array);
    return 0;
}