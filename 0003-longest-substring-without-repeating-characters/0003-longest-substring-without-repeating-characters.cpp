class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int r = 0, l = 0;
        int hash[256];
        int maxSize = 0;

       
        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }

        while (r < n) {

         
            if (hash[s[r]] != -1) {
                l = max(l, hash[s[r]] + 1);
            }

           
            hash[s[r]] = r;

            
            int length = r - l + 1;

        
            maxSize = max(maxSize, length);

            r++;
        }

        return maxSize;
    }
};