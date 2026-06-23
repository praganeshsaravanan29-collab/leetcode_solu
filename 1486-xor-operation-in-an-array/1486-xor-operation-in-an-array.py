class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        ans=0
        for i in range(n):
            n=start+2*i
            ans=ans^n
        return ans    
            

        