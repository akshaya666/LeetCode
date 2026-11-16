class Solution {
public:
    vector<string>ans;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        string op="";
        func(s,op,wordDict,0);
        return ans;
    }
    void func(string &s,string &op,vector<string>&wordDict,int start){
        if(start==s.size())
        {
            op.pop_back();
            ans.push_back(op);
            op.push_back(' ');
            return;
        }
        for(int i=start;i<s.size();i++)
        {
            if(find(wordDict.begin(),wordDict.end(),s.substr(start,i-start+1))!=wordDict.end())
            {
                string prev=op;
                op+=s.substr(start,i-start+1);
                op.push_back(' ');
                func(s,op,wordDict,i+1);
                op=prev;
                
                
            }
        }
    }
};