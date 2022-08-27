#include<bits/stdc++.h>
using namespace std;

int countInversion(int arr[],int start,int mid,int end){
    
    int inversion = 0;

    int lengthArr1=mid+1 - start;
    int lengthArr2=end - mid;

    int Arr1[lengthArr1],Arr2[lengthArr2];
    for(int i=0;i<lengthArr1;i++){
        Arr1[i]=arr[start+i];
    }
    for(int i=0;i<lengthArr2;i++){
        Arr2[i]=arr[mid+1+i];
    }

    int firstPointer=0;
    int secondPointer=0;
    int postn=start;
    while(firstPointer<lengthArr1 && secondPointer<lengthArr2){
        if(Arr1[firstPointer]<=Arr2[secondPointer]){
            arr[postn]=Arr1[firstPointer];
            postn++;firstPointer++;
        }else{
            arr[postn]=Arr2[secondPointer];
            postn++;secondPointer++;
            inversion += lengthArr1-firstPointer;
        }
    }
    while(firstPointer<lengthArr1){
        arr[postn]=Arr1[firstPointer];
            postn++;firstPointer++;
    }
    while(secondPointer<lengthArr2){
        arr[postn]=Arr2[secondPointer];
            postn++;secondPointer++;
    }

    return inversion;
}

int devider(int arr[],int start,int end){
    
    int inversion=0;
    
    if(start<end){
        int mid=(start+end)/2;

        inversion += devider(arr,start,mid);
        inversion += devider(arr,mid+1,end);

        inversion += countInversion(arr,start,mid,end);
    }

    return inversion;
}

int main(){
    int arr[]={3,5,6,9,1,2,7,8};
    int length=sizeof(arr)/sizeof(arr[0]);

    cout<<devider(arr,0,length-1)<<endl;

    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}