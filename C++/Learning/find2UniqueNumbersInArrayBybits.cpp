#include<bits/stdc++.h>
using namespace std;

bool isBit(int num , int post){
    //Gives true if the postion on the number is a bit
    return ((num & (1<<post))!=0);
}

void unique(int n, int array[]){
    int xorsum=0;
    for(int i=0;i<n;i++){
        //Getting the xorsum of all the elements to get the xorsum of the two unique elemnts
        xorsum=xorsum^array[i];
    }
    int postn=0;
    while(!(isBit(xorsum,postn))){
        //Finding the postion of the bit which is differnt in both the unique number
        postn++;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        //Using the differnt bit to get one number
        if(isBit(array[i],postn)){
            newxor=newxor^array[i];
        }
    }
    //xor sum the total unique value to the one unique value we found to get the unknown one
    xorsum=newxor^xorsum;
    cout<<"THE ELEMENTS ARE "<<newxor<<" AND "<<xorsum;
    
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
    unique(n,array);
    return 0;
}