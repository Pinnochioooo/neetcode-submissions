class Solution {
public:

    int max =0;

    int dfs(vector<int> & nums,int idx,int sum){
        if(idx>=nums.size())return sum;

        if(sum+nums[idx] > nums[idx]){
            if(sum+nums[idx] > max)max = sum+nums[idx];
            return dfs(nums,idx+1,sum+nums[idx]);
        }

        else{
            if(nums[idx] > max)max = nums[idx];
            return dfs(nums,idx+1,nums[idx]);
        }
    
    }

    int maxSubArray(vector<int>& nums) {
        max = nums[0];
        int temp = dfs(nums,0,0);
        return max;

    }
};
