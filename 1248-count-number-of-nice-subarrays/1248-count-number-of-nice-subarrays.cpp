class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);
    }
    int atmost(vector<int>& nums,int k){
        int r=0;
        int l=0;
        int n=nums.size();
        int odd=0;
        int count=0;
        while(n>r){
            if(nums[r]%2) odd++;
            while(odd>k){
                if(nums[l]%2) odd--;
                l++; 
            }
            r++;
            count+=r-l+1;
        }
        return count;
    }
};