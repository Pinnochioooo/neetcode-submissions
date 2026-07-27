class Solution {
public:

    
  int func(vector<int>& prices, int canbuy,int idx,vector<vector<int>>&dp){
        if(idx>=prices.size())return 0;

        if(dp[idx][canbuy]!=-1){return dp[idx][canbuy];}


        if(canbuy){
            int buy = -prices[idx]+func(prices,0,idx+1,dp);
            int skip = func(prices,canbuy,idx+1,dp);

            return dp[idx][canbuy]= max(buy,skip);
        }
        else{
            int sell = prices[idx]+ func(prices,1,idx+2,dp);
            int skip = func(prices,canbuy,idx+1,dp);
            return dp[idx][canbuy] = max(sell,skip);
        }


    }




    


    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(),vector<int>(2,-1));
        return func(prices,1,0,dp);
    }
};
