class Solution:
    def reverse(self, x: int) -> int:
        sign = 1 if x>0 else -1
        ans,x = 0,abs(x)

        while x != 0:
            x,rem = divmod(x,10)
            ans = ans * 10 + rem
            if ans > 2**31-1:
                return 0
        return sign*ans
        
        