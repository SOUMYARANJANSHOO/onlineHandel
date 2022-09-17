#include<bits/stdc++.h>
using namespace std;

int main(){
    //you can take these as user input
    int sizeOfStorage=19;
    vector<int> storage={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int sizeOfK=3;

    int first_ptr=0,second_ptr;
    int zeroes_count=0;
    int answer=0;

    for(second_ptr=0;second_ptr<sizeOfStorage;second_ptr++){
        if(storage[second_ptr]==0){
            zeroes_count++;
        }
        while(zeroes_count>sizeOfK){
            if(storage[first_ptr]==0){
                zeroes_count--;
            }
            first_ptr++;
        }
        answer=max(answer,second_ptr-first_ptr+1);
    }

    cout<<"The maximun number of consecutive ones are::"<<answer;

    return 0;
}