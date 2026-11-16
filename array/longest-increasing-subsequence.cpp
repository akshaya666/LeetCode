class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(); 
        if(n == 0)
            return 0;
        vector<int> dp;
        dp.push_back(INT_MIN);
        for(int i=0;i<n;i++)
        {
            auto it = lower_bound(dp.begin(), dp.end(), nums[i]);
            if(it == dp.end())
                dp.push_back(nums[i]);
            else
                dp[it - dp.begin()] = nums[i];
        }
        return dp.size()-1;
    }
};