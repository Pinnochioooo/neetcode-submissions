class Solution {
public:
    vector<vector<int>> dp;
    
    
    vector<int> drow = {0,0,1,-1};
    vector<int> dcol = {1,-1,0,0};

    int dfs(vector<vector<int>>& matrix,int row,int col){
        if(dp[row][col]!=-1)return dp[row][col];
        
        
        int currmax,maxi=0;
        for(int k =0;k<4;k++){
            int nrow = row+drow[k];
            int ncol = col +dcol[k];

            if(nrow<matrix.size() && ncol < matrix[0].size() && nrow >=0 && ncol>= 0   && matrix[nrow][ncol]>matrix[row][col]  ){
                
                currmax = dfs(matrix,nrow,ncol);
                if(currmax>maxi)maxi = currmax;
            }
        }
        dp[row][col]=1+maxi;
        return 1+maxi;
        
    }



    int longestIncreasingPath(vector<vector<int>>& matrix) {

        int maxx = 0,temp;
        dp.assign(matrix.size(),vector<int>(matrix[0].size(),-1));
        

        for(int i =0;i<matrix.size();i++){
            for(int j =0;j<matrix[0].size();j++){
                
                temp= dfs(matrix,i,j);
                if(temp>maxx)maxx = temp;
                
            }
        }


        return maxx;
        
    }
};
