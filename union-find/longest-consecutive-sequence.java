class Solution {
    public int longestConsecutive(int[] nums) {
        
        int ans = 1;
        if(nums.length ==0)
        return 0;
        Set<Integer> set = new HashSet<>();

        for(int i =0;i<nums.length;i++){
            set.add(nums[i]);
        }

        for(int element : set){

            if(!set.contains(element-1)){

                int count = 1;
                int x = element;
                while(set.contains(x+1)){
                    x = x+1;
                    count++;
                }

                ans = Math.max(ans,count);

            }
        }
        return ans;
    }
}