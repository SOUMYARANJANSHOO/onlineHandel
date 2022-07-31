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
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum= sum + list[j];
            cout<<sum<<endl;
        }
    }
    return 0;
}