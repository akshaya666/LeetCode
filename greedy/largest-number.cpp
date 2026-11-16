class Solution {
public:
    static bool compare(string a,string b)
    {
        string s1=a+b;
        string s2=b+a;
        return s1>s2; 
    }
    string largestNumber(vector<int>& nums) {
        vector<string>s;
        for(int i=0;i<nums.size();i++)
            s.push_back(to_string(nums[i]));
        sort(s.begin(),s.end(),compare);
        string ans="";
        if(s[0]=="0")
            return "0";
        for(auto i: s)
            ans+=i;
        return ans;
    }
};