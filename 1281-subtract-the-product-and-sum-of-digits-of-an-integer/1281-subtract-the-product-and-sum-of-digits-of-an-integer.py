class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        l=str(n)
        prod=1
        summ=0
        for i in l:
            prod*=int(i)
            summ+=int(i)
        return prod-summ    


        