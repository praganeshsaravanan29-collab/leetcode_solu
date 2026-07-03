class Solution:
    def longestPalindrome(self, s: str) -> int:
        a=[]
        z=list(s)
        for i in set(z):
            if z.count(i)%2==0:
                a.extend([i]*z.count(i))
            else:
                a.extend([i]*(z.count(i)-1))   
        if len(s)!=len(a):
            a.append('p')
        return len(a)             
        