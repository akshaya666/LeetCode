class Solution {
    public boolean isIsomorphic(String s, String t) {
        int[] a = new int[128];
        int[] b = new int[128];
        Arrays.fill(a, -1);
        Arrays.fill(b, -1);

        if(s.length()!=t.length())
        {
            return false;
        }
        for(int i =0;i<s.length();i++){

            int x = (int)s.charAt(i);
            int y = (int)t.charAt(i);

            if(a[x-1]!=b[y-1])
            {
                return false;
            }
            a[x-1]=i;
            b[y-1]=i;


        }
        return true;

    }
}