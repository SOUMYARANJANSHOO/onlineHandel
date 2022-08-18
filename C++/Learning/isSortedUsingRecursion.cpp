#include<bits/stdc++.h>
using namespace std;

bool sorted(int array[],int n){
	if(n==1){
		return true;
	}else{
		return ((array[n] >= array[n-1]) && sorted(array-1,n-1));
	}
}

int main(){
	int n;
	cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY::";
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cout<<"ENTER THE ELEMENT::";
		cin>>array[i];
	}
	cout<<sorted(array,n);
	return 0; 
}
