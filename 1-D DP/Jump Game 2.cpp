

Question link : https://leetcode.com/problems/jump-game-ii/submissions/
#include<iostream>
using namespace std;

int jump(vector<int>& nums){
        //Bottom Up DP
        int n = nums.size();
        int dp[n];
        
        dp[0] = 0;
        for(int i=1;i<nums.size();i++){
            dp[i] = INT_MAX;
        }
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<=i+nums[i] && j<n;j++){
                dp[j] = min(dp[j],1+dp[i]);
            }
        }
        return dp[n-1];
}

int main(){

return 0;
}