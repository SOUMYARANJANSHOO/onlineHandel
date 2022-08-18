#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout<<"ENTER THE NUMBER::";
	cin>>n;
	int stp[n];
	for(int i=2;i<=n;i++){
		stp[i]=i;
	}
	for(int i=2;i<=n;i++){
		cout<<stp[i];
	}        
	for(int i=2;i<=n;i++){
		if(stp[i]==i && pow(i,2)<=n){
			int j=pow(i,2);
			while(j<=n){
				stp[j]=i;
			}j=j+i;
		}
	}
	while(n!=1){
		cout<<stp[n];
		n/=stp[n];
	}
	return 0;
}


