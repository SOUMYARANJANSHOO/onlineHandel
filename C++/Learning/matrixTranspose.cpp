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
    for(int i=0;i<n;++i){
        for(int j=i;j<m;++j){
            int temp=list[j][i];
            list[j][i]=list[i][j];
            list[i][j]=temp;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;j++){
            cout<<list[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}