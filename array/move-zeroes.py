class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        index = -1

        for i in range(0,len(nums)):
            if nums[i]==0:
                index = i
                break;
        if index == -1:
            return
        
        for j in range(index+1,len(nums)):

            if nums[j]!=0:

                nums[j],nums[index]=nums[index],nums[j]
                index+=1
        
        