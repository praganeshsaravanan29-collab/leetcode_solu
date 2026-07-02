class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        sum11=0
        sum1=0
        for i in nums:
            if i<10:
                sum11+=i
            else:
                sum1+=i
        return sum11 != sum1          
        