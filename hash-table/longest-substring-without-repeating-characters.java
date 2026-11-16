class Solution {
    public int lengthOfLongestSubstring(String s) {
        
        Set <Character> unique = new HashSet<>();

        int left = 0;
        int right = 0;
        int ans = 0;
        while(right< s.length()){

                while(unique.contains(s.charAt(right)))
                {
                    unique.remove(s.charAt(left));
                    left++;
                }

                unique.add(s.charAt(right));
                
                ans = Math.max(ans,right-left+1);

                right++;

        } 
        return ans;
    }
}