class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        
        cnt = 0
        mx = 0

        for num in nums:
            if num == 1:
                cnt+=1
            else:
                cnt = 0
            mx = max(mx,cnt)
        return mx