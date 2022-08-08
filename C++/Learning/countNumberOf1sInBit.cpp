#include<bits/stdc++.h>
using namespace std;

int noOf1s(int x){
    int count=0;
    while(x){
        x=(x & (x-1));
        count++;
    }
    return count;
}

int main(){
    int n;
    cout<<"ENTER A NUMBER::";
    cin>>n;
    cout<<"THE NUMBER OF BITS IN THE BOOLEAN FORM OF "<<n<<" IS ::"<<noOf1s(n);
    return 0;
}