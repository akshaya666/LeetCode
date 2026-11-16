class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
            return 1;
        for(int i=0;i<n;i++)
            if(nums[i]<=0 || nums[i]>n)
                nums[i]=1;
        for(int i=0;i<n;i++)
            nums[(nums[i]-1)%n]+=n;
        for(int i=0;i<n;i++)
            if(nums[i]<=n)
           return i+1;
        return n+1;
    }
};