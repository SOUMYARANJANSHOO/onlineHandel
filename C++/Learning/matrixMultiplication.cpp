#include<iostream>
using namespace std;

int main(){
    //declaring variables
    int n1,n2,n3;
    //taking inputs
    cout<<"ENTER THE NUMBER OF ROWS OF ELEMENTS OF FIRST MATRIX YOU WANT TO ENTER::";
    cin>>n1;
    cout<<"ENTER THE NUMBER OF COLUMNS OF ELEMENTS OF FIRST MATRIX YOU WANT TO ENTER::";
    cin>>n2;
    //initialising input arrays m1 and m2
    int m1[n1][n2];
    for(int i=0;i<n1;++i){
        for(int j=0;j<n2;++j){
            cout<<"ENTER A NUMBER::";
            cin>>m1[i][j];
        }   
    }
    //printing the input
    for(int i=0;i<n1;++i){
        for(int j=0;j<n2;++j){
            cout<<m1[i][j];
        }cout<<endl;
    }cout<<endl;
    
    cout<<"ENTER THE NUMBER OF COLUMNS OF ELEMENTS OF SECOND MATRIX YOU WANT TO ENTER::";
    cin>>n3;
    int m2[n2][n3];
    for(int i=0;i<n2;++i){
        for(int j=0;j<n3;++j){
            cout<<"ENTER A NUMBER::";
            cin>>m2[i][j];
        }   
    }
    //printing the input
    for(int i=0;i<n2;++i){
        for(int j=0;j<n3;++j){
            cout<<m2[i][j];
        }cout<<endl;    
    }cout<<endl; 

    //intiallising ans matrix
    int ans[n1][n3];
    for(int i=0;i<n1;++i){
        for(int j=0;j<n3;++j){
            ans[i][j]=0;
        }   
    }

    //writting loops to get the ans
    for(int i=0;i<n1;++i){
        for(int j=0;j<n3;++j){
            for(int k=0;k<n2;++k){
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }   
    }

    //output ans
    cout<<"::RESULTANT MATRIX::"<<endl;
    for(int i=0;i<n1;++i){
        for(int j=0;j<n3;++j){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}