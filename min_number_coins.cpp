// coin change problem - minimum number of coins.
// this problem is similar to stair case problem

#include<iostream>
#include<climits>
using namespace std;

int solve(int *coins,int n,int sum){
    int t[n+1][sum+1];

    for(int j=0;j<=sum;j++){
        t[0][j] = INT_MAX - 1;
    }

    for(int i=1;i<=n;i++){
        t[i][0] = 0;
    }

    for(int j=1;j<=sum;j++){
        if(j%coins[0] == 0){
            t[1][j] = j/coins[0];
        }

        else{
            t[1][j] = INT_MAX-1;
        }
    }


    for(int i=2;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(coins[i-1] <= j){
                t[i][j] = min(1+t[i][j-coins[i-1]],t[i-1][j]);
            }

            else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][sum];
}

int main(){
    int arr[] = {1, 2, 5, 10};
    int n=sizeof(arr)/sizeof(int);
    int V=48;

    cout<<solve(arr,n,V);
    return 0;
}
