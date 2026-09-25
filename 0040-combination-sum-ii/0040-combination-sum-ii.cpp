class Solution {
public:
    void findcomb(int ind, vector<vector<int>>& ans, int t,
                  vector<int>& ds, vector<int>& arr) {

        if (t == 0) {
            ans.push_back(ds);
            return;
        }

        for (int i = ind; i < arr.size(); i++) {

            if (i > ind && arr[i] == arr[i - 1])
                continue;

            if (arr[i] > t)
                break;

            ds.push_back(arr[i]);

            findcomb(i + 1, ans, t - arr[i], ds, arr);

            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        sort(candidates.begin(), candidates.end());

        findcomb(0, ans, target, ds, candidates);

        return ans;
    }
};