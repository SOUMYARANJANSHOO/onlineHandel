#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"ENTER THE NUMBER OF ROWS OF ELEMENTS YOU WANT TO ENTER::";
    cin>>n;
    cout<<"ENTER THE NUMBER OF COLUMNS OF ELEMENTS YOU WANT TO ENTER::";
    cin>>m;
    int list[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;j++){
            cout<<"ENTER A NUMBER::";
            cin>>list[i][j];
        }   
    }

    int target;
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH::";
    cin>>target;
    int a=0,b=m-1;
    bool flag=true;
    while(a<=n-1 && b>=0){
        if(target==list[a][b]){
            cout<<"FOUND TARGET AT "<<a<<" "<<b;
            flag=false;
            break;
        }else if(target<list[a][b]){
            --b;
        }else{
            ++a;
        }
    }
    if(flag){
        cout<<"COULD NOT FOUND THE TARGET";
    }
    return 0;
}