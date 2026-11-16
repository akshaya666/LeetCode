class Solution(object):
    def canJump(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """

        maxr = 0

        for i in range(len(nums)):
            if maxr < i:
                return False
            maxr = max(maxr,i+nums[i])

            if maxr>=len(nums)-1:
                return True
        
        
        