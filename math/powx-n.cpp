class Solution {
public:
    double myPow(double x, int n) {
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(n>0)
            return func(x,n);
        else return 1/func(x,n);
    }
    double func(double x,int n)
    {
        if(n==1)
            return x;
        if(n==0)
            return 1;
        if(n%2==0)
            return func(x*x,n/2);
        else return x*func(x*x,n/2);
    }
};