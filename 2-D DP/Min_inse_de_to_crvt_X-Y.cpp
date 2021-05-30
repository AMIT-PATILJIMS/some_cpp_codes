// https://www.geeksforgeeks.org/minimum-number-deletions-insertions-transform-one-string-another/


#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

void LCS(char *x,int n,char *y,int m){
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
    
    int val = t[n][m];

cout<<n-val<<"\n";
cout<<m-val<<"\n";

}

int main(){
    char x[]="heap";
    char y[]="pea";
    
    LCS(x,strlen(x),y,strlen(y));
    return 0;
}