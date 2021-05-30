// https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1


   int countWays(int n)
    {
        /* recursive solution
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        return countWays(n-1) + countWays(n-2);
        */
        
        // 1 Dp
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        
        int mod = pow(10,9) + 7;
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        
        for(int i=3;i<=n;i++){
            dp[i] = (dp[i-1] + dp[i-2])%mod;
        }

        return dp[n];
    }



/*
mistakes that you done during coding

dp[i] = (dp[i-1] + dp[i-2])%(10^9 + 7)

directly writing 10^9 is not allowed it will give error.

Note: At this condition you should use power function.

*/