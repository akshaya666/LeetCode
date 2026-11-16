class Solution {
public:
    int mySqrt(int x) {
        long int s=1;
        long int e=x;
        long int res=1;
       if(x==0||x==1)
           return x;
        
        while(s<=e)
        {
           long  int mid=(s+e)/2;
            if(mid*mid==x)
                return mid;
            else if(mid*mid<x){
                res=mid;
                s=mid+1;
            }
            else e=mid-1;
        }
        return res;
        
    }
};