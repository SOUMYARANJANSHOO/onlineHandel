#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int length){
    int maxElement=arr[0];
    for(int i=0;i<length;i++){
        maxElement=max(maxElement,arr[i]);
    }
    int frequencySum[maxElement+1]={0};
    for(int i=0;i<length;i++){
        frequencySum[arr[i]]++;
    }
    for(int i=1;i<=maxElement;i++){
        frequencySum[i]+= frequencySum[i-1];
    }

    int output[length]={0};
    for(int i=(length-1);i>=0;i--){
        output[--frequencySum[arr[i]]]=arr[i];
    }
    for(int i=0;i<length;i++){
        arr[i]=output[i];
    }
}

int main(){
    int arr[]={1,3,2,3,4,1,6,4,3};
    int length=(sizeof(arr)/sizeof(arr[0]));

    countSort(arr,length);
    
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}