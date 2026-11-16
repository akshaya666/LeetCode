class Solution {
public:
    int longestSubstring(string s, int k) {
        return func(s,0,s.size(),k);
    }
    int func(string s,int s1,int e,int k)
    {
        if(e<k)
            return 0;
        int count[26]={0};
        for(int i=s1;i<e;i++)
            count[s[i]-'a']++;
        for(int mid=s1;mid<e;mid++)
        {
            if(count[s[mid]-'a']>=k)
                continue;
            int midn=mid+1;
            while(midn<e && count[s[midn]-'a']<k)
                midn++;
            return max(func(s,s1,mid,k),func(s,midn,e,k));
        }
        return e-s1;
    }
};