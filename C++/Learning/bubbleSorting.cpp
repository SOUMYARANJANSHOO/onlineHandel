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
        for(int j=0;j<=n-i;++j){
            if(list[j]>list[j+1]){
                int temp = list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;++i){
        cout<<list[i]<<"  ";
    }
    return 0;
}