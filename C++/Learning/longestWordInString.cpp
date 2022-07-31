#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "ENTER THE NUMBER OF ELEMENTS::";
    cin>>n;
    cin.ignore();

    char string[n+1];
    cout << "ENTER THE SENTENCE::";
    cin.getline(string,n);
    
    int currLen=0,maxLen=0;
    int currPostn=0,maxPostn=0;
    for(int i=0;i<=n;i++){
        if(string[i]==' ' || string[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
                maxPostn=currPostn;
            }
            currLen=0;

        }else{
            currLen+=1;
            currPostn+=1;
        }
    }
    cout<<"THE LENGHT OF THE LONGEST WORD IS::"<<maxLen;
    for(int i=n-maxLen;i<=maxPostn;++i){
        cout<<string[i];
        cout<<i;
    }
    
    return 0;
}