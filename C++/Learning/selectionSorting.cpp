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
    
    for(int i=0;i<n;++i){
        for(int j=i+1;j<=n;++j){
            if(list[i]>list[j]){
                int temp=list[i];
                list[i]=list[j];
                list[j]=temp;
            }
        }
    }

    for(int i=0;i<n;++i){
        cout<<list[i]<<endl;
    }
    return 0;
}