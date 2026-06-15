class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        res=0
        for sentence in sentences:
            word=sentence.split()
            res=max(res,len(word))
        return res    
        