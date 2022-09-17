#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,target;
    cout<<"Enter the size of the array ::";
    cin>>size;

    cout<<"Enter the target you want to find::";
    cin>>target;

    vector<int> storage(size);

    for(auto &i:storage){
        cin>>i;
    }

    bool flag=false;
    sort(storage.begin(),storage.end());

    int first_ptr=0,second_ptr,third_ptr;


    while(first_ptr<size){
        int new_target=target-storage[first_ptr];
        second_ptr=first_ptr+1,third_ptr=size-1;
        while(second_ptr<=third_ptr){
            int current_sum = storage[second_ptr] + storage[third_ptr];
            if(current_sum==new_target){
                flag=true;
                break;
            }else if(current_sum>new_target){
                third_ptr--;
            }else{
                second_ptr++;
            }
        }if(flag){break;}first_ptr++;
    }

    if(flag){
        cout<<"There is a triplet found in the array "<<storage[first_ptr]<<" "<<storage[second_ptr]<<" "<<storage[third_ptr];
    }else{
        cout<<"No triplet found";
    }




    return 0;
}