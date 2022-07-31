#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE NUMBER OF ELEMENTS YOU WANT TO ENTER::";
    cin>>n;
    int list[n];
    for(int i=0;i<n;++i){
        cout<<"ENTER A NUMBER::";
        int j;
        cin>>j;
        list[i]=j;
    }
    for(int i=1;i<n;++i){
        int current=list[i];
        int j=i-1;
        while (list[j]>current && j>=0){
            list[j+1]=list[j];
            --j;
        }
        list[j+1]=current;     
    }
    for(int i=0;i<n;++i){
        cout<<list[i]<<"  ";
    }        
    return 0;
}