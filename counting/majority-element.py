class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        cnt = 0
        el = 0

        for num in nums:
            if cnt == 0:
                el = num
                cnt+=1
            elif el == num :
                cnt += 1
            else:
                cnt -= 1
        
        ans = nums.count(el)

        if ans > len(nums)//2:
            return el

        