class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        pos = []
        neg = []

        for x in nums:
            if x < 0:
                neg.append(x)
            else:
                pos.append(x)

        for i in range(len(pos)):
            nums[2*i] = pos[i]
            nums[2*i+1] = neg[i]

        return nums
        