class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        nn=nums[:n]
        l=nums[n:]
        ll=[]
        for i,j in zip(nn,l):
            ll.append(i)
            ll.append(j)
        return ll    