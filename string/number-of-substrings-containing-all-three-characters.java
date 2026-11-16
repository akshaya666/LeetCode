class Solution {
    public int numberOfSubstrings(String s) {
        
        int[] freq = new int[3];
        Arrays.fill(freq,0);
        int count = 0;

        int left = 0;
        int right = 0;

        while(right<s.length()){

            freq[(int)s.charAt(right)-'a']++;

            while(freq[0]>0 && freq[1]>0 && freq[2]>0){

                count += s.length()-right;

                freq[(int)s.charAt(left)-'a']--;

                left++;
            }

            right++;
            
        }
        return count;
    }
}