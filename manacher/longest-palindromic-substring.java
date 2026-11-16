class Solution {
    public String EAC(String s,int left,int right){
        while(left>=0 && right<s.length() && s.charAt(left) == s.charAt(right)){

            left--;
            right++
            ;
        }
        return s.substring(left+1,right);
    }
    public String longestPalindrome(String s) {
        
        if(s.length()<=1)
        return s;

        String ans = s.substring(0,1);

        for(int i=0;i<s.length()-1;i++){

            String odd = EAC(s,i,i);
            String even = EAC(s,i,i+1);

            if(odd.length()>ans.length()){
                ans = odd;
            }
            if(even.length()>ans.length()){
                ans = even;
            }
        }

        return ans;
    }
}