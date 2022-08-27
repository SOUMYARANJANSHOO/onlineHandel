#include<bits/stdc++.h>
using namespace std;

void mergeSort(int arr[],int start,int mid,int end){
    int lenArr1=mid-start+1;  //the addition of one coz the indexing starts from 0
    int lenArr2=end-mid;

    int Arr1[lenArr1] , Arr2[lenArr2];
    for(int i=0;i<lenArr1;i++){
        Arr1[i]=arr[start+i];
    }
    for(int i=0;i<lenArr2;i++){
        Arr2[i]=arr[i+mid+1];
    }
    int firstPointer=0;
    int secondPointer=0;
    int counter=start;
    while(firstPointer<lenArr1 && secondPointer<lenArr2){
        if(Arr1[firstPointer]<=Arr2[secondPointer]){
            arr[counter]=Arr1[firstPointer];
            counter++;
            firstPointer++;
        }
        else{
            arr[counter]=Arr2[secondPointer];
            counter++;
            secondPointer++;
        }
    }
    while(firstPointer<lenArr1){
        arr[counter]=Arr1[firstPointer];
        counter++;
        firstPointer++;
    }
    while(secondPointer<lenArr2){
        arr[counter]=Arr2[secondPointer];
        counter++;
        secondPointer++;
    }
}

void devider(int arr[],int start,int end){
    if(start<end){
        int mid=(start+end)/2;
        devider(arr,start,mid);
        devider(arr,mid+1,end);

        mergeSort(arr,start,mid,end);
    }
}

int main(){
    int arr[8]={8,4,6,9,7,2,1,3};
    devider(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}