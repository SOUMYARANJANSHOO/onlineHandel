/*
We gonna solve it by the help of array preproccesing. We will make auxillary arrays accordint to our needs and the apply the required formula to solve it.
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int terrian[]={3,1,2,4,0,1,3,2};
    int size = sizeof(terrian)/sizeof(terrian[0]);

    //makeing auxilaries arrays;
    int left_max[size];
    left_max[0]=terrian[0];
    for(int i=1;i<size;i++){
        left_max[i]=max(left_max[i-1],terrian[i]);
    }
    
    int right_max[size];
    right_max[size-1]=terrian[size-1];
    for(int i=size-2;i>=0;i--){
        right_max[i]=max(right_max[i+1],terrian[i]);
    }

    //to code the last answer we will the formula to calculate how much water can be retained above one block. Water above one block = maximum of(left_max and right_max) - actual height of that block given by terrian[i]

    int total_area=0;

    for(int i=0;i<size;i++){
        total_area += (min(left_max[i],right_max[i])-terrian[i]);
    }

    cout<<"The total amount of water that can be stored in the pits is ::"<<total_area;

    return 0;
}