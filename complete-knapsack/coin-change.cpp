class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,INT_MAX));
        dp[n][0]=0;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<=amount;j++)
            {
                dp[i][j]=dp[i+1][j];
                if(j-coins[i]>=0 && dp[i][j-coins[i]]!=INT_MAX)
                    dp[i][j]=min(1+dp[i][j-coins[i]],dp[i][j]);
                    
            }
        }
        return dp[0][amount]==INT_MAX ?-1 : dp[0][amount]; 
        
    }
};