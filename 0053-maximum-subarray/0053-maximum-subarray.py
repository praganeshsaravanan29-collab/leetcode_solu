class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        maxi=nums[0]
        arr=nums[0]
        for i in range(1,len(nums)):
            arr=max(arr+nums[i],nums[i])
            maxi=max(maxi,arr)
        return maxi    
        