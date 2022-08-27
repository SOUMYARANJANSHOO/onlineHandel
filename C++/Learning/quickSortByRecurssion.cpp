#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int start,int end){
    int pivot = arr[end];
    int firstPivot=start-1;
    for(int secondPivot=start;secondPivot<end;secondPivot++){
        if(arr[secondPivot]<pivot){
            firstPivot++;
            swap(arr[firstPivot],arr[secondPivot]);
        }
    }
    swap(arr[firstPivot+1],arr[end]);
    return(firstPivot+1);
}
void quickSort(int arr[],int start,int end){
    if(start<end){
        int pivot=partition(arr,start,end);

        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}

int main(){
    int arr[8]={7,3,5,1,2,8,6,9};
    quickSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}