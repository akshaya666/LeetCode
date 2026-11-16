class Solution {
public:
    int trap(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int ans=0;
        int leftm=0,rightm=0;
        while(l<r)
        {
            if(height[l]<height[r])
            {
                height[l]>=leftm ? leftm=height[l]:ans+=leftm-height[l];
                l++;
            }
            else
            {
                height[r]>=rightm ? rightm=height[r]:ans+=rightm-height[r];
                r--;
            }
        }
        return ans;
    }
};