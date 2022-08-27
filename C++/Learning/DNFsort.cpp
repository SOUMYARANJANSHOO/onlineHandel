#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int post1,int post2){
    int temp=arr[post1];
    arr[post1]=arr[post2];
    arr[post2]=temp;
}

void dnfSort(int arr[],int length){
    int low=0,mid=0,high=length-1;
    while (mid<=high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr,low,mid);
            mid++;low++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr,mid,high);
            high--;
            break;
        }
    }
    
    
}

int main(){
    int arr[]={0,1,2,0,2,2,2,0,0,1,1,2,0,1};
    int length=(sizeof(arr)/sizeof(arr[0]));

    dnfSort(arr,length);

    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}