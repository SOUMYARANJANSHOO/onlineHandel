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

    int rs=0,re=n-1,cs=0,ce=m-1;
    while(rs<=re && cs<=ce){
        for(int i=cs;i<=ce;++i){
            cout<<list[rs][i]<<" ";
        }++rs;
        for(int i=rs;i<=re;++i){
            cout<<list[i][ce]<<" ";
        }--ce;
        for(int i=ce;i>=cs;--i){
            cout<<list[re][i]<<" ";
        }--re;
        for(int i=re;i>=rs;--i){
            cout<<list[i][cs]<<" ";
        }++cs;
    }
    return 0;
}