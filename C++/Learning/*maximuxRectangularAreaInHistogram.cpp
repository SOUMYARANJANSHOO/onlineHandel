/*
This program is not complete. Hence it will not provide desirable output.
*/

#include<bits/stdc++.h>
using namespace std;

void setRightBound(vector<int> histogram,vector<int> &rightbound){
    
    stack<int> storage;
    rightbound[histogram.size()-1]=histogram.size();

    for(int i=histogram.size()-2;i>=0;i++){
        while(!storage.empty() && histogram[i]<histogram[storage.top()]){
            storage.pop();
        }

        if(storage.empty()){
            rightbound[i]=histogram.size();
        }else{
            rightbound[i]=storage.top();
        }

        storage.push(i);
    }
}
void setLeftBound(vector<int> histogram,vector<int> &leftbound){
    
    stack<int> storage;
    leftbound[0]=-1;

    for(int i=1;i<histogram.size();i++){
        while(!storage.empty() && histogram[i]<histogram[storage.top()]){
            storage.pop();
        }

        if(storage.empty()){
            leftbound[i]=-1;
        }else{
            leftbound[i]=storage.top();
        }

        storage.push(i);
    }
}


int getMaxArea(vector<int> histogram){

    int size=histogram.size();

    int max_area=INT_MIN;

    vector<int> rightBound{size};
    setRightBound(histogram,rightBound);

    vector<int> leftBound{size};
    setLeftBound(histogram,leftBound);

    for(int i=0;i<size;i++){
        
        int length=histogram[i];
        int width=rightBound[i] - leftBound[i] - 1;
        int new_area = length*width;

        max_area=max(max_area,new_area);
    }

    return max_area;
}

int main(){
    vector<int> histogram={6,2,5,4,5,1,6};
    
    cout<<"The max area is ::"<<getMaxArea(histogram)<<endl;

    return 0;
}