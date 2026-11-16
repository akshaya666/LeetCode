class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        vector<int>maxi(n);
        vector<int>mini(n);
        mini[0]=nums[0];
        maxi[0]=nums[0];
        int ans=nums[0];
        for(int i=1;i<n;i++)
        {
            maxi[i]=max(max(maxi[i-1]*nums[i],mini[i-1]*nums[i]),nums[i]);
            mini[i]=min(min(maxi[i-1]*nums[i],mini[i-1]*nums[i]),nums[i]);
            ans=max(ans,maxi[i]);
        }
        return ans;
    }
};