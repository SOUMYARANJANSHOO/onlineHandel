#include<bits/stdc++.h>
using namespace std;

int unique(int n, int array[]){
    //finding the xorsum to get the number which is not present in pair
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum= xorsum^array[i];
    }
    return xorsum;
}

int main(){
    int n;
    cout<<"ENTER THE LENGTH OF THE ARRAY::";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE VALUE::";
        cin>>array[i];
    }
    cout<<"THE UNIQUE NUMBER OF THE ARRAY IS::"<<unique(n,array);
    return 0;
}