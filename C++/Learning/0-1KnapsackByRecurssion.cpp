#include<bits/stdc++.h>
using namespace std;

int knapsack(int weight[],int value[],int numberOfItems,int capacity){

    if(numberOfItems==0 || capacity==0){
        return 0;
    }
    if(weight[numberOfItems-1]>capacity){
        return knapsack(weight,value,numberOfItems-1,capacity); 
    }

    return max(knapsack(weight,value,numberOfItems-1,capacity-weight[numberOfItems-1])+value[numberOfItems-1],knapsack(weight,value,numberOfItems-1,capacity));

}

int main(){
    int numberOfItems =3;
    int weight[numberOfItems]={10,20,30};
    int value[numberOfItems]={100,50,150};
    int capacity=50;
    cout<<knapsack(weight,value,numberOfItems,capacity);

    return 0;
}