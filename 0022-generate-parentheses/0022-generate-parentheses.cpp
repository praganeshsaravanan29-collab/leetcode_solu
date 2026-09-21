class Solution {
public:
    vector<string> sol;

    vector<string> generateParenthesis(int n) {
        generate(0, 0, n, "");
        return sol;
    }

    void generate(int ob, int cb, int n, string ans) {
        if (ans.length() == n * 2) {
            sol.push_back(ans);
            return;
        }

        if (ob < n) {
            generate(ob + 1, cb, n, ans + "(");
        }

        if (cb < ob) {
            generate(ob, cb + 1, n, ans + ")");
        }
    }
};