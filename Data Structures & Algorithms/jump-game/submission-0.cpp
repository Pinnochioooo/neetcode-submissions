class Solution {
public:

    vector<int> dp;


    int dfs(vector<int>& nums,int idx){
        if(idx==nums.size()-1)return 1;
        if(dp[idx]!= -1)return dp[idx];

        for(int i =1;i<=nums[idx];i++){
            if(idx+i > nums.size()-1)break;
            if(dfs(nums,idx+i))return 1;
            
        }
        return 0;
    }




    bool canJump(vector<int>& nums) {
        dp.assign(nums.size(),-1);
    if(dfs(nums,0)==1)return true;
    else{return false;}
    }
};
