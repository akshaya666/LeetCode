class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        for(int k=0;k<nums.size()+1;k++)
            func(nums,temp,0,k);
        return ans;
    }
    void func(vector<int>& nums,vector<int>& temp,int i,int k)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<nums.size();j++)
        {
            temp.push_back(nums[j]);
            func(nums,temp,j+1,k);
            temp.pop_back();
        }
    }
    
};