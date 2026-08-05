class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal)-atmost(nums,goal-1);
        
    }  
    int atmost(vector<int>& nums,int k)   {
        if(k<0){
            return 0;
        }
        int r=0;
        int l=0;
        int sum=0;
        int count=0;
        while(r<nums.size()){
            sum+=nums[r];
            while(sum>k){
                sum-=nums[l];
                l++;
            }
            count+=r-l+1;
            r++;

            

        }
        return count;
        
    }
};