// https://www.youtube.com/watch?v=Q5W6-fwO2as&list=PLt4nG7RVVk1jcoLFb1gn0EylZ381IgrNq&index=3

#include<bits/stdc++.h>
using namespace std;

/*
int min_n_ways(){
if(n==0){
    return 0;
}

if(n==1||n==2){
    return 1;
}

return min(min_n_ways(n-1),min_n_ways(n-2));
}

*/
int min_n_ways(int n){
    int dp[n];
    
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    
    for(int i=3;i<=n;i++){
        dp[i] = 1+min(dp[i-1],dp[i-2]);
    }
    return dp[n];
}
int main(){
    int n=5;
    cout<<min_n_ways(n);
    return 0;
}