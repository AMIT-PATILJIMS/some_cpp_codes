
//Unbounded Knap_sack
//Question Link:
//https://practice.geeksforgeeks.org/problems/rod-cutting0840/1#

//Using 2-D dynamic programming

int cutRod(int price[], int l){
        int n = l;
        int length[n+1];
        
        for(int i=0;i<=l;i++){
            length[i] = i;
        }
        
        int dp[n+1][l+1];
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=l;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=l;j++){
                if(length[i]>j){
                    dp[i][j] = dp[i-1][j];
                }
                
                else{
                    dp[i][j] = max(price[i-1]+dp[i][j-length[i]],dp[i-1][j]);
                }
            }
        }
        
        return dp[n][l];
}



//Using 1-D dynamic Programming


int cutRod(int price[], int n) {
        int ans[n+1];
        
        memset(ans,0,sizeof(ans));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                ans[i]=max(ans[i],price[j-1]+ans[i-j]);
            }
        }
        return ans[n];
}