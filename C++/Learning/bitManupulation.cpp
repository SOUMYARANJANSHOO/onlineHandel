#include <bits/stdc++.h>
using namespace std;

void getBit(int n, int postn){
    bool flag=(n & (1<<postn));
    if(flag){
        cout<<"THE VALUE AT THE POTITION IS 1";
    }else{
        cout<<"THE VALUE AT THE POTITION IS 1";
    }
}
int setBit(int n, int postn){
    return (n | (1<<postn)); 
}
int clearBit(int n, int postn){
    int mask=~(1<<postn);
    return (n & mask);
}
int updateBit(int n, int postn, int value){
    if(value){
        int mask=~(1<<postn);
        n= (n & mask);
        return (n | (1<<postn));
    }else{
        int mask=~(1<<postn);
        return (n & mask);
    }
}
int main(){
    int n, postn, value;
    cout << "ENTER THE NUMBER ::";
    cin >> n;
    cout << "ENTER THE POSTITION ::";
    cin >> postn;
    cout<<"ENTER THE OPERATION [GET=1,SET=2,CLEAR=3,UPDATE=4]::";
    int opp;
    cin>>opp;
    switch (opp){
        case 1:
            getBit(n,postn);
            break;
        case 2:
            cout<<setBit(n,postn);
            break;
        case 3:
            cout<<clearBit(n,postn);
            break;
        case 4:
            cout << "ENTER THE VALUE ::";
            cin >> value;
            cout<<updateBit(n,postn,value);
            break;
        default:
            cout<<"::ENTER A VALID INPUT::";
            break;
    }
    return 0;
}