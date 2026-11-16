class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int res=INT_MAX;
        int sum=0;
        int cursum=0;
        int n=gas.size();
        for(int i=0;i<n;i++)
        {
            cursum+=gas[i]-cost[i];
            if(cursum>=0)
                res=min(res,i);
            else
            {
                res=INT_MAX;
                cursum=0;
            }
            sum+=gas[i]-cost[i];
        }
        return sum<0?-1:res;
    }
};