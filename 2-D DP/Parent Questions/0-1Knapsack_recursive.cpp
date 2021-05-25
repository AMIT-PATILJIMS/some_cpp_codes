//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/

//Recursive Implementation of 0-1 knapsack

#include<iostream>
using namespace std;

/*

Input:
N = 3
W = 4
values[] = {1,2,3}
weight[] = {4,5,1}
Output: 3

*/

int knapsack(int values[],int weight[],int n,int w){
    if(n==0||w==0){
        return 0;
    }
    
    if(weight[n-1]>w){
        return knapsack(values,weight,n-1,w);
    }
    
    else{
        return max(values[n-1] + knapsack(values,weight,n-1,w-weight[n-1]) , knapsack(values,weight,n-1,w));
    }
}

int main(){
int n=4;
int w=4;

int values[]={1,2,3};
int weight[]={4,5,1};

cout<<knapsack(values,weight,n,w);
return 0;
}