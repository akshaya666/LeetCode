class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        nums_i = [(num,i) for (i,num) in enumerate(nums)]

        nums_i.sort(key = lambda x: x[0])

        left, right = 0,len(nums_i)-1

        while left < right :

            if nums_i[left][0]+nums_i[right][0] ==  target:
                return [nums_i[left][1],nums_i[right][1]]
            elif nums_i[left][0]+nums_i[right][0] < target:
                left+=1
            else:
                right-=1
        

