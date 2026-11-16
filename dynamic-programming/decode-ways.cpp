class Solution {
public:
    int numDecodings(string s) {
        if(s.size()==0)
            return -1;
        if(s[0]=='0')
            return 0;
        if(s.size()==1)
        {
            if(s[0]>='1')
                return 1;
            return 0;
        }
        int n=s.size();
        vector<int>dp(n+1,0);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int oned=s[i-1]-'0';
            int twod=(s[i-2]-'0')*10+(s[i-1]-'0');
            if(oned>=1)
                dp[i]+=dp[i-1];
            if(twod>=10 && twod<=26)
                dp[i]+=dp[i-2];
            
        }
        return dp[n];
    }
};