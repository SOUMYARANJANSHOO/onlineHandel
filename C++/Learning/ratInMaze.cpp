#include<bits/stdc++.h>
using namespace std;

bool isSafe(int** arr,int x,int y,int n){
    if(x<n && y<n && arr[x][y]==1){
        return true;
    }return false;
}

bool ratInMaze(int  **arr,int x,int y,int n,int** solarr){
    
    if(x==n-1 && y==n-1){
        solarr[x][y]=1;
        return true;
    }

    if(isSafe(arr,x,y,n)){
        solarr[x][y]=1;
        if(ratInMaze(arr,x+1,y,n,solarr)){
            return true;
        }
        if(ratInMaze(arr,x,y+1,n,solarr)){
            return true;
        }
        solarr[x][y]=0;    //backtracking
        return false;
    }
    return false;
}

int main(){
    int n;
    cout<<"ENTER THE LENGTH OF PATHS IN ONE SIDE::";
    cin>>n;

    int **arr=new int*[n]; //dynamic memory allocation
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    cout<<"ENTER THE ARRAY WITH OBSTARCLES AS 1 AND REST AS 0::"<<endl;
    for(int i=0;i<n;i++){ //getting the input for the question
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    
    int **solarr=new int*[n];
    for(int i=0;i<n;i++){
        solarr[i]=new int[n];
        for(int j=0;j<n;j++){
            solarr[i][j]=0;
        }
    }
    

    if(ratInMaze(arr,0,0,n,solarr)){  //writting the main loop 
        cout<<"THE PATH OF THE RAT SHOULD BE::"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<solarr[i][j]<<" ";
            }cout<<endl;
        }
    }else{
        cout<<"::THERE IS NO POSSIBLE PATH::";
    }
    
    delete arr,solarr;

    return 0;
}
/* 
5
question::
1 0 1 0 1
1 1 1 1 1
0 1 0 1 0
1 0 0 1 1
1 1 1 0 1
ans::
1 0 0 0 0 
1 1 1 1 0 
0 0 0 1 0 
0 0 0 1 1 
0 0 0 0 1
*/