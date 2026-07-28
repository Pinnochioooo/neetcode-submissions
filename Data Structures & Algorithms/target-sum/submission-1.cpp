class Solution {
public:

    int n ,offset,amount;
    vector<vector<int>> dp;


    int dfs(vector<int>& nums,int currsum,int idx){
        if(idx==nums.size())return currsum==amount;

        if(dp[idx][currsum + offset]!=-1)return dp[idx][currsum + offset];

        int ways =0;

        ways+=dfs(nums,currsum-nums[idx],idx+1);
        ways+=dfs(nums,currsum+nums[idx],idx+1);

        return dp[idx][offset+currsum]=ways;
    }


    int findTargetSumWays(vector<int>& nums, int target) {
        n = nums.size();

        amount = target;

        for(int x : nums){
            offset+=abs(x);
        }


        dp.assign(n,vector<int>(2*offset +1 , -1));

        return dfs(nums,0,0);
    }
};
