#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    for(int j=2;j<=sqrt(n);++j){
        if(n==2){
            return true;
        }else if(n%j==0){
            return false;
        }
    }
    return true;
}

int main(){
    int a,b;
    cout<<"ENTER A NUMBER::";
    cin>>a;
    cout<<"ENTER A NUMBER::";
    cin>>b;

    for(int i=a;i<=b;++i){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}