class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        
      map<char,int> m1,m2;
        for(int i=0;i<s.size();i++)
        {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        map<char,int>::iterator itr;
        for(int i=0;i<s.size();i++)
        {
            if(m1[t[i]]!=m2[t[i]])
                return false;
        }
        return true;
    
    }
};