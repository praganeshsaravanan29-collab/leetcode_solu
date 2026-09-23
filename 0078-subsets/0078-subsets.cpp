class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int tot=1<<nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<tot;i++){
            vector<int>sub;
            {
                for(int j=0;j<nums.size();j++){
                    if(i&(1<<j)){
                        sub.push_back(nums[j]);
                    }
                }
                ans.push_back(sub);
            }
        }
        return ans;
    }
};