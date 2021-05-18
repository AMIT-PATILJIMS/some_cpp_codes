//https://practice.geeksforgeeks.org/problems/trailing-zeroes-in-factorial5134/1


#include<iostream>
using namespace std;

int main(){
    int n=20;
    int i=5;
    
    int c=0;
    //condition in while loop
// last time you do mistake here while(n)
    while(n/i>=1){
        c+=n/i;
        i=i*5;
    }
    cout<<c;
    return 0;
}