#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int post1,int post2){
    int temp=arr[post1];
    arr[post1]=arr[post2];
    arr[post2]=temp;
}

void waveSort(int arr[],int length){
    for(int i=1;i<length;i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1]){
            swap(arr,i,i+1);
        }
    }
}
int main(){
    int arr[]={1,3,4,7,5,6,2};
    int length=(sizeof(arr)/sizeof(arr[0]));
    
    waveSort(arr,length);
    
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}   