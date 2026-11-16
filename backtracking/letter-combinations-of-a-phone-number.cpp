class Solution {
public:
    vector<string>ans;
    vector<string> letterCombinations(string digits) {
        map<char,string>  mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        string cur="";
        if(digits.size()==0)
            return {};
        bt(digits,cur,0,mp);
        return ans;
        
    }
    void bt(string digits,string &cur,int ind,map<char,string> mp)
    {
        if(cur.size()==digits.size())
        {
            ans.push_back(cur);
            return;
        }
        string temp=mp[digits[ind]];
        for(int i=0;i<temp.size();i++)
        {
            cur.push_back(temp[i]);
            bt(digits,cur,ind+1,mp);
            cur.pop_back();
        }
        
    }
};