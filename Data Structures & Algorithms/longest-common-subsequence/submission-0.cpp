class Solution {
public:

    int dfs(string a,string b,int idxa,int idxb,vector<vector<int>>& dp){
        if(idxa == a.size() || idxb == b.size())return 0;
        if(dp[idxa][idxb]!= -1)return dp[idxa][idxb];
        
        
            
        if(a[idxa]!=b[idxb]){
           return dp[idxa][idxb] = max (dfs(a,b,idxa+1,idxb,dp),dfs(a,b,idxa,idxb+1,dp));

        }
    
            return  dp[idxa][idxb] =1+ dfs(a,b,idxa+1,idxb+1,dp);
        
    }


    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> dp(text1.size(),vector<int>(text2.size(),-1));

        return dfs(text1,text2,0,0,dp);
    }
};
