#include<iostream>
using namespace std;

int main(){
    cout<<"::::WELCOME::::"<<endl;
    int a,b,R;
    char o;
    cout<<"ENTER FIRST NUMBER::"<<endl;
    cin>>a;
    cout<<"ENTER SECOND NUMBER::"<<endl;
    cin>>b;
    cout<<"ENTER THE OPERATION YOU WANT TO PERFORM::"<<endl;
    cin>>o;

    switch (o)
    {
    case '+':
        R=a+b;
        cout<<"THE SUM OF THE TWO VALUES IS "<<R<<endl;
        break;
    case '-':
        R=a-b;
        cout<<"THE DIFFERENCE BETWEEN THE TWO VALUES IS "<<R<<endl;
        break;
    case '*':
        R=a*b;
        cout<<"THE PRODUCT OF THE TWO VALUES IS "<<R<<endl;
        break;
    case '/':
        R=a/b;
        cout<<"THE DIVISION OF THE TWO VALUES IS "<<R<<endl;
        break;
    case '%':
        R=a%b;
        cout<<"THE REMINDER OF THE TWO VALUES IS "<<R<<endl;
        break;
    
    default:
        cout<<":::PLEASE ENTER A VALID VALUE:::";
        break;
    }

    return 0;
}