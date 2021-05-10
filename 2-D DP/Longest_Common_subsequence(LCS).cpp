Question Link : https://www.geeksforgeeks.org/longest-common-subsequence-dp-4/


#include<iostream>
#include<string.h>

using namespace std;


int max(int x,int y){
    if(x>y)
    return x;
    else
    return y;
}

int LCS(char *x,int n,char *y,int m){
    int t[n+1][m+1];
    
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                t[i][j]=0;
            }
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(x[i-1] == y[j-1]){
                t[i][j]=1+t[i-1][j-1];
            }
            
            else{
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    
    return t[n][m];
}

int main(){
    char x[] = "AGGTAB"; 
    char y[] = "GXTXAYB";
    
    cout<<LCS(x,strlen(x),y,strlen(y));
    return 0;
}