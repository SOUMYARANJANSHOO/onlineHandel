#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cout<<"ENTER THE FIRST NUMBER::";
	cin>>a;
	cout<<"ENTER THE SECOND NUMBER::";
	cin>>b;

	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	cout<<"THE GCD OF THE TWO NUMBERS IS::"<<a;
}


