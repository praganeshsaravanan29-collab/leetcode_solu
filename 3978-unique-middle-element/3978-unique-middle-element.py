class Solution:
    def isMiddleElementUnique(self, nums: list[int]) -> bool:
        s=nums[int(len(nums)/2)]
        b=nums.count(s)
        return b==1
        
            
        