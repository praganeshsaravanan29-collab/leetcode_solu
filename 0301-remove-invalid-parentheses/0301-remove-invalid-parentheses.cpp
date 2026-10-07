class Solution {
public:

    vector<string> ans;

    bool isValid(string s) {

        int count = 0;

        for(char c : s) {

            if(c == '(') {
                count++;
            }

            else if(c == ')') {

                count--;

                if(count < 0) {
                    return false;
                }
            }
        }

        return count == 0;
    }

    void solve(string s, int start, int left, int right) {

        if(left == 0 && right == 0) {

            if(isValid(s)) {
                ans.push_back(s);
            }

            return;
        }

        for(int i = start; i < s.size(); i++) {

            if(i > start && s[i] == s[i - 1]) {
                continue;
            }

            if(left + right > s.size() - i) {
                return;
            }

            if(left > 0 && s[i] == '(') {

                string temp = s;
                temp.erase(i, 1);

                solve(temp, i, left - 1, right);
            }

            if(right > 0 && s[i] == ')') {

                string temp = s;
                temp.erase(i, 1);

                solve(temp, i, left, right - 1);
            }
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        int left = 0;
        int right = 0;

        for(char c : s) {

            if(c == '(') {
                left++;
            }

            else if(c == ')') {

                if(left > 0) {
                    left--;
                }

                else {
                    right++;
                }
            }
        }

        solve(s, 0, left, right);

        return ans;
    }
};