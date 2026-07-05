class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        d={}
        n=len(nums)
        ans=[]
        for i in nums:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        for key in d:
            if d[key]>n/3:
                ans.append(key)        
        return ans        