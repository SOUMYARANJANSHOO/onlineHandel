#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER TO WHICH YOU WANT TO PRINT THE PRIME NUMBERS::";
    cin>>n;
    int array[n];
    for(int i=2;i<=n;i++){
        array[i]=1;
    }
    for(int i=2;i<=n;i++){
        if(array[i]==1 && pow(i,2)<=n){
            int j=pow(i,2);
            while(j<=n){
                if(array[j]=1){
                    array[j]=0;
                }j=j+i;
            }
        }
    }
    cout<<"THE PRIME NUMBERS ARE::"<<endl;
    for(int i=2;i<=n;i++){
        if(array[i]==1){
            cout<<i<<endl;
        }
    }
    return 0;
}