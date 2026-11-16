class Solution {
public:
    int calculate(string s) {
        int cur=0;
        int last=0;
        int res=0;
        char sign='+';
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
                cur=cur*10+(s[i]-'0');
            if(!isdigit(s[i])&&!iswspace(s[i]) ||i==s.size()-1)
            {
                if(sign=='+')
                {
                    res+=last;
                    last=cur;
                }
                if(sign=='-')
                {
                    res+=last;
                    last=-cur;
                }
                if(sign=='*')
                    last=last*cur;
                if(sign=='/')
                    last=last/cur;
                sign=s[i];
            cur=0;
            }
            
        }
        res+=last;
        return res;
        
        
    }
};