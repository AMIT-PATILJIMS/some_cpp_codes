//0-1 Knapsack problem

//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

//tutorial video
//https://www.youtube.com/watch?v=ntCGbPMeqgg&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go&index=5
// Tabulation mathod
 
int knapSack(int w, int wt[], int val[], int n) 
{
        int dp[n+1][w+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=w;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=w;j++){
                if(wt[i-1]>j){
                    dp[i][j] = dp[i-1][j];
                }
                
                else{
                    dp[i][j] = max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
                }
            }
        }
        return dp[n][w];
}