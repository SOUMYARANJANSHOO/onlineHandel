#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"ENTER NUMBER OF ROWS::";
    cin>>a;
    cout<<"ENTER NUMBER OF COLUMN::";
    cin>>b;
    
    for( int i=1;i<=a;++i){
        for(int j=1;j<=b;++j){
            if(i==1||i==a||j==1||j==b){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }cout<<"\n";
    }

    return 0;
}