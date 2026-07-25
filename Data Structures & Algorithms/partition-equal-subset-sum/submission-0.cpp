class Solution {
public:

    bool finder(vector<int>& nums,int target,int idx,vector<vector<int>>& dp){
        if(target == 0)return true;
        if(idx == nums.size())return false;

        if(dp[idx][target]!= -1){
            return dp[idx][target];
        }

        bool take = false;
        if(nums[idx] <=  target){take = finder(nums,target-nums[idx],idx+1,dp);}

        bool nottaken = finder(nums,target,idx+1,dp);

        return dp[idx][target]=take||nottaken;
    }


    bool canPartition(vector<int>& nums) {
        int sum =0;
        int idx =0;
        


        for(auto x: nums){
            sum+=x;
        }
        if(sum%2)return false;
       int target = sum/2;
    vector<vector<int>> dp(nums.size(),vector<int>(target+1,-1));
        return finder(nums,sum/2,0,dp);
    }
};
