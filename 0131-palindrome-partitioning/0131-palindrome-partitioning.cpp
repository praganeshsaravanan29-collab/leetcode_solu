class Solution {
public:

    bool ispalindrone(int i, int j, string s) {

        while(i < j) {

            if(s[i] != s[j]) {
                return false;
            }

            i++;
            j--;
        }

        return true;
    }

    void f(int i, int n, string s, 
           vector<string>& ds, 
           vector<vector<string>>& ans) {

        if(i == n) {
            ans.push_back(ds);
            return;
        }

        for(int j = i; j < n; j++) {

            if(ispalindrone(i, j, s)) {

                ds.push_back(s.substr(i, j - i + 1));

                f(j + 1, n, s, ds, ans);

                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        int n = s.size();

        vector<string> ds;
        vector<vector<string>> ans;

        f(0, n, s, ds, ans);

        return ans;
    }
};