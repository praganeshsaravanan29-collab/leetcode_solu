class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int tot=0;
        int left=0;
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
        }
        for(int j=0;j<nums.size();j++){
            int rigth=tot-left-nums[j];
            if(rigth==left){
                return j;
            }
            left+=nums[j];
        }
        return -1;
    }
};