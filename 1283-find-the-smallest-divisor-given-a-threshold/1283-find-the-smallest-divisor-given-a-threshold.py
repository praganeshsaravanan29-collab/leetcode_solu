class Solution:
    def smallestDivisor(self, nums: List[int], threshold: int) -> int:
        if len(nums)>threshold:
            return -1
        low,high=1,max(nums)
        while low<=high:
            mid=(low+high)//2
            tot=0
            for num in nums:
                tot+=math.ceil(num/mid)
            if tot<=threshold:
                high=mid-1
            else:
                low=mid+1
        return  low                
        