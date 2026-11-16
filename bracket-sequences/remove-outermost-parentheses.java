class Solution {
    public String removeOuterParentheses(String s) {
        StringBuilder ans = new StringBuilder();
        char[] a = s.toCharArray();
        int count = 0;
        for(int i=1;i<a.length;i++){

            if(a[i] == '('){
                ans.append('(');
                count++;

            }
            else
            {
                if(count == 0){

                    i++;
                }
                else {
                    ans.append(')');
                    count--;
                }
            }
        }
        return ans.toString();
    }
}