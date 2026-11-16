class Solution {
    public String frequencySort(String s) {
        
        HashMap<Character,Integer> mp = new HashMap<>();

        for(char c : s.toCharArray()){

            mp.put(c,mp.getOrDefault(c,0)+1);
        }

        List<Character>[] bucket = new List[s.length()+1];

        for(char c : mp.keySet()){

            int fre = mp.get(c);

            if(bucket[fre]==null)
            {
                bucket[fre] = new ArrayList<>();
            }
            bucket[fre].add(c);
        }
        StringBuilder ans = new StringBuilder();
        for(int i = s.length();i>=0;i--){
                if(bucket[i]!=null){

                    for(char c : bucket[i]){

                        for(int j=0;j<i;j++)
                        ans.append(c);
                    }
                }
        }
        return ans.toString();
    }
}