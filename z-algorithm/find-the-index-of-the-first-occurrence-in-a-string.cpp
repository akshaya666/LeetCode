class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()==0)
            return 0;
        if(haystack.size()==0)
            return -1;
        int n=haystack.size();
        int counter=0;
        int i;
        for(i=0;i<n;i++)
        {
            if(counter==needle.size())
                break;
            if(haystack[i]==needle[counter])
                 counter++;
            else
            {
                if(counter>0)
                    i=i-counter;
                counter=0;
            }
            
        }
        return counter<needle.size() ? -1 : i-counter;
    }
};