class Solution {
public:

    vector<int> dp;

    int dfs(vector<int>& nums,int idx){
        if(idx>=nums.size()-1)return 0;

        if(dp[idx]!= INT_MAX)return dp[idx];

        for(int i =1;i<=nums[idx];i++){

            if(idx+i>=nums.size())break;
            int temp = dfs(nums,idx+i);

             if(temp!=INT_MAX)dp[idx]=  min(dp[idx],1+temp);
        }
        return dp[idx];
    }



    int jump(vector<int>& nums) {
        dp.assign(nums.size(), INT_MAX);

        return dfs(nums,0);
    }



};
