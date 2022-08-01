#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"ENTER A NUMBER::";
    cin>>n;
    bool flag=true;
    for(int i=2;i<sqrt(n);++i){
        if(n==2){
            cout<<"::THE ENTERED NUMBER IS A PRIME NUMBER::";
        }else if(n%i==0){
            cout<<"::THE ENTERED NUMBER IS NOT A PRIME NUMBER::";
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"::THE ENTERED NUMBER IS A PRIME NUMBER::";
    }
    return 0;
}