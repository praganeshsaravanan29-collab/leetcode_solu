class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        sum=0
        for i in nums:
            sum+=i
        n=sum%k
        return n    
        