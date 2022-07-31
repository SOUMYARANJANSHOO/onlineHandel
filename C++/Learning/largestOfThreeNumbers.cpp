#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first number::"<<endl;
    cin>>a; 
    cout<<"Enter second number::"<<endl; 
    cin>>b; 
    cout<<"Enter third number::"<<endl; 
    cin>>c; 

    if(a>b){
        if(a>c){
            cout<<a<<" is the largest number";
        }else{
            cout<<c<<" is the largest number";
        }
    }else{
        if(b>c){
            cout<<b<<" is the largest number";
        }else{
            cout<<c<<" is the largest number";
        }
    }

    return 0;
}