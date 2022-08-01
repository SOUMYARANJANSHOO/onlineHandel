#include<iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"ENTER THE NUMBER OF NUBERS YOU WANT TO ENTER::";
    cin>>n;
    int list[n];
    for(int i=0;i<n;++i){
        int j;
        cout<<"ENTER A NUMBER::";
        cin>>j;
        list[i]=j;
    }
    cout<<"ENTER THE NUMBER YOU WANT TO SEARCH::";
    cin>>key;
    bool flag=true;
    int start=0,end=n;
    while(start<=end){
        int middle=(start+end)/2;
        if(list[middle]==key){
            cout<<"THE NUMBER FOUND AT "<<middle<<" POSTION";
            flag=false;
            break;
        }else if(list[middle]>key){
            end=middle-1;
        }else if(list[middle]<key){
            start=middle+1;
        }
    }

    if(flag){
        cout<<"CANNOT FIND ANY INPUT OF THAT NUMBER";
    }

    return 0;
}