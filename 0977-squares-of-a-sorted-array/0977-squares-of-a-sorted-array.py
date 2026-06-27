class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        nums2=[]
        for i in nums:
            nums2.append(abs(i)**2)
        nums2.sort()
        return nums2

        