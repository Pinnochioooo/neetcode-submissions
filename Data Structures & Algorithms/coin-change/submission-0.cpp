class Solution {
public:
    
    
    
    int  dfs(vector<int>& coins , int amount,vector<int>& dp){


        if( amount == 0 )return 0;
        if(amount<0)return INT_MAX;


        if (dp[amount] != -1)
                return dp[amount];
        
    int best = INT_MAX;
    for(int i =0;i<coins.size();i++){
        int  curr = dfs(coins,amount - coins[i],dp);

         if(curr!=INT_MAX)best = min(best,1+curr);
    }
        
        dp[amount] = best;    
        return best;
    }



    int coinChange(vector<int>& coins, int amount) {
        vector<int> dp(amount + 1, -1);
        int cost=0;
        
        cost = dfs(coins,amount,dp);
    if(cost==INT_MAX)return -1;
        return cost;
    }
};
