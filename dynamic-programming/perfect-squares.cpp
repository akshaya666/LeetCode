class Solution {
public:
    int numSquares(int n) {
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
                    int ans=INT_MAX;

            for(int j=1;j*j<=i;j++)
            {
                ans=min(1+dp[i-j*j],ans);
               
            }
            dp[i]=ans;
        }
        return dp[n];
    }
};