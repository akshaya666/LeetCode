class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=s.size();
        vector<bool>dp(n+1,false);
        dp[0]=true;
        for(int i=1;i<=s.size();i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(dp[j]){
                string str=s.substr(j,i-j);
                if(find(wordDict.begin(),wordDict.end(),str)!=wordDict.end())
                {
                    dp[i]=true;
                    break;
                }
            }
            }
        }
        return dp[n];
    }
};