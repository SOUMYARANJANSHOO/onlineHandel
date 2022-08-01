#include<iostream>
using namespace std;

int sum(int a,int b){
    int c=a+b;
    return c;
}

int main(){
    int num1 , num2;
    cout<<"Please enter the first number :"<<endl;
    cin>>num1;
    cout<<"Please enter the second number :"<<endl;
    cin>>num2;
    cout<<"The sum of the two numbers is :"<<sum(num1,num2)<<endl;
    return 0;
}