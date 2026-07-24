class Solution {
public:

    void finder(vector<int>& nums,vector<int>& dp){
        
        for(int i =0;i<nums.size();i++){
            int currmax =INT_MIN;
            for(int j =0;j<i;j++){
                if(nums[j]<nums[i] && dp[j]>currmax){
                    currmax = dp[j];
                }

            }
            if(currmax!=INT_MIN)dp[i]=currmax+1;
        }
    }




    int lengthOfLIS(vector<int>& nums) {
        vector<int> dp(nums.size(),1);

        finder(nums,dp);
        int ans =INT_MIN;
        for(int i =0;i<nums.size();i++){
            if(dp[i]>ans)ans = dp[i];
        }

        return ans;
    }
};
