class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> nums1=nums;
        sort(nums1.begin(),nums1.end());
        int id=nums.size()-1;
        for(int i=1;i<nums.size();i+=2)
            nums[i]=nums1[id--];
        for(int i=0;i<nums.size();i+=2)
            nums[i]=nums1[id--];
        
    }
};