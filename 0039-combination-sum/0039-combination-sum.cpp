class Solution {
public:
    void findcomb(vector<vector<int>>& ans, int t, int ind,
                  vector<int>& ds,vector<int>& arr) {
        if (ind == arr.size()) {
            if (t == 0) {
                ans.push_back(ds);
            }
            return;
        }

        if (t >= arr[ind]) {
            ds.push_back(arr[ind]);
            findcomb(ans, t - arr[ind], ind, ds, arr);
            ds.pop_back();
        }

        findcomb(ans, t, ind + 1, ds, arr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        findcomb(ans, target, 0, ds, candidates);

        return ans;
    }
};