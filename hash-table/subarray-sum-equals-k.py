class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        mp = {}

        count = 0
        summ = 0
        mp[0] = 1

        for i in range(len(nums)):
            summ += nums[i]

            rem = summ - k

            if rem in mp:
                count += mp[rem]
            
            mp[summ] = mp.get(summ,0) + 1
        return count

        