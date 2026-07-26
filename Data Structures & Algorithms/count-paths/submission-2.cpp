class Solution {
public:

    vector<int> drow = {0,1};
    vector<int> dcol = {1,0};

    int dfs(int m , int n,int row, int col ,vector<vector<int>>& dp){
        if(row == m-1 && col == n -1){
        return 1;}

        if(dp[row][col])return dp[row][col];

    int ans =0;
    for(int k =0;k<2;k++){
        int nrow = row+drow[k];
        int ncol = col +dcol[k];


        if(nrow<m && ncol<n ){
            ans+=dfs(m,n,nrow,ncol,dp);
        }
    }
    return dp[row][col]=ans;
        
    }

    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,0));
        
        return dfs(m,n,0,0,dp);
        
    }
};

