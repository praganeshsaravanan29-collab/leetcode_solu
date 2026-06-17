class Solution:
    def reversePrefix(self, s: str, k: int) -> str:
        if(len(s)==k):
           l=s[::-1]
           return l
        return s[:k][::-1]+s[k:]
        