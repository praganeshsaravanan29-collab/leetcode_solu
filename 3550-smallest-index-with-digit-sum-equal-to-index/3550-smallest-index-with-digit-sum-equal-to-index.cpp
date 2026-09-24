class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int total=0;
            while(nums[i]>0){
                int n=nums[i]%10;
                total+=n;
                nums[i]/=10;
            }
            if(i==total){
                return i;
            }
        }
        return -1;
    }
};