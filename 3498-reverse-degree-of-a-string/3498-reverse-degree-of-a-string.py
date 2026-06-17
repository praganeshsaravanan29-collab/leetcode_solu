class Solution:
    def reverseDegree(self, s: str) -> int:
        index=1
        sum=0
        for i in s:
            s=26-(ord(i)-ord('a'))
            sum+=s*index
            index+=1
            
        return sum    



        