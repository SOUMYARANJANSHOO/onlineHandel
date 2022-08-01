#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"ENTER A NUMBER::";
    cin>>n;
    int sum=0;
    int orignalN=n;
    while(n>0){
        int lastdigit= n%10;
        sum += round(pow(lastdigit,3));
        n=n/10;
    }
    if(sum==orignalN){
        cout<<"::THE ENTERED NUMBER IS AN ARMSTRONG NUMBER::";
    }else{
        cout<<"::THE ENTERED NUMBER IS NOT AN ARMSTRONG NUMBER::";
    }
    return 0;
}