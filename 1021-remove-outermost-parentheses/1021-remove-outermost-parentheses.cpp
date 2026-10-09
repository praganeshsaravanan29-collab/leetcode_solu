class Solution {
public:
    string removeOuterParentheses(string s) {
        int total = 0;
        string result = "";

        for(char b : s) {
            if(b == '(') {
                if(total > 0) {
                    result += b;
                }
                total++;
            }
            else {
                total--;
                if(total > 0) {
                    result += b;
                }
            }
        }

        return result;
    }
};