#include<bits/stdc++.h>
using namespace std;

int prefixEvaluation(string expression){
    
    stack <int> storage;

    for(int i=expression.length()-1;i>=0;i--){
        if(expression[i]>='0' && expression[i]<='9'){
            //cout<<expression[i]-'0'<<endl;
            storage.push(expression[i]-'0');
        }
        else{
            int operand1 = storage.top();
            storage.pop();
            int operand2 = storage.top();
            storage.pop();
            switch (expression[i])
            {
            case '+':
                storage.push(operand1+operand2);
                break;
            case '-':
                storage.push(operand1-operand2);
                break;
            case '*':
                storage.push(operand1*operand2);
                break;
            case '/':
                storage.push(operand1/operand2);
                break;
            case '^':
                storage.push(pow(operand1,operand2));
                break;
            }
        }
    }

    return storage.top();
}

int postfixEvaluation(string expression){
    
    stack <int> storage;

    for(int i=0;i<expression.length();i++){
        if(expression[i]>='0' && expression[i]<='9'){
            //cout<<expression[i]-'0'<<endl;
            storage.push(expression[i]-'0');
        }
        else{
            int operand2 = storage.top();
            storage.pop();
            int operand1 = storage.top();
            storage.pop();
            switch (expression[i])
            {
            case '+':
                storage.push(operand1+operand2);
                break;
            case '-':
                storage.push(operand1-operand2);
                break;
            case '*':
                storage.push(operand1*operand2);
                break;
            case '/':
                storage.push(operand1/operand2);
                break;
            case '^':
                storage.push(pow(operand1,operand2));
                break;
            }
        }
    }

    return storage.top();
}

int main(){

    string expression1 = "-+7*45+20";
    string expression2 = "46+2/5*7+";


    cout<<prefixEvaluation(expression1)<<endl; 
    cout<<postfixEvaluation(expression2)<<endl; 
    
    return 0;
}

//-+7*45+20 = 25
//46+2/5*7+ = 32