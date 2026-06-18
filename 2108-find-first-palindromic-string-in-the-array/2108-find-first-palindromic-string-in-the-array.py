class Solution:
    def firstPalindrome(self, words: List[str]) -> str:
        for i in range(len(words)):
            if words[i]==str(words[i])[::-1]:
                return words[i]
        return ""      
        