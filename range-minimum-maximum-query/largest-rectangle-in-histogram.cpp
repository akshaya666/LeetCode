class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int i=0;
        int areanow=0;
        int maxarea=0;
        while(i<heights.size())
        {
            if(s.empty()||heights[i]>=heights[s.top()]){
                s.push(i);
                i++;
            }
            else
            {
                int l=heights[s.top()];
                int b;
                s.pop();
                if(s.empty())
                    b=i;
                else b=i-s.top()-1;
                areanow=l*b;
                maxarea=max(maxarea,areanow);
                
                
                
            }
            
        }
        while(!s.empty())
        {
            int l=heights[s.top()];
                int b;
                s.pop();
                if(s.empty())
                    b=i;
                else b=i-s.top()-1;
                areanow=l*b;
                maxarea=max(maxarea,areanow);
                
        
        }
        return maxarea;
    }
};