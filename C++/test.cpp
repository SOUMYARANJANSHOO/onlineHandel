#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> nums = {1,1,2,2,3,3};
    int count=1;
    int iterator=1;
    while(iterator < nums.size()){
        if(nums[iterator]==nums[iterator-1]){
            nums.erase(nums.begin()+iterator);
        }
        else{
            count++;
            iterator++;
        }
    }
    cout<< count<<endl;

    for(auto i:nums){
        cout<<i<<" ";
    }
}
