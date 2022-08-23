#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr,int q,int y,int n){
    //checking the row above
    for(int row=0;row<q;row++){
        if(arr[row][y]==1){
            return false;
        }
    }
    //checking left top diagonal
    int row=q;
    int column=y;
    while(row>=0 && column>=0){
        if(arr[row][column]==1){
            return false;
        }row--;column--;
    }
    //checking right top diagonal
    row=q;
    column=y;
    while(row>=0 && column<n){
        if(arr[row][column]==1){
            return false;
        }row--;column++;
    }
    return true;
}

bool nQueen(int** arr,int q,int n){
    if(q>=n){
        return true;
    }
    for(int column=0;column<n;column++){
        if(isSafe(arr,q,column,n)){
            arr[q][column]=1;
            if(nQueen(arr,q+1,n)){
                return true;
            }
            arr[q][column]=0;
        }
    }
    return false;
}

int main(){
    int n;
    cout<<"ENTER THE LENGTH OF BOARD IN ONE SIDE::";
    cin>>n;

    int **arr=new int*[n]; //dynamic memory allocation
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=0;
        }
    }   

    if(nQueen(arr,0,n)){  //writting the main loop 
        cout<<"THE POSITION OF THE QUEEN SHOULD BE::"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }cout<<endl;
        }
    }else{
        cout<<"::THERE IS NO POSSIBLE PATH::";
    }
    
    delete arr;
    return 0;
}