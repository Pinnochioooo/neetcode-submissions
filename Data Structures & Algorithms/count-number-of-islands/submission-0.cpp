class Solution {
public:
    int num;

    vector<int> dx={0,0,1,-1};
    vector<int> dy={1,-1,0,0};

    void dfs(vector<vector<char>>& grid, int row, int column,vector<vector<bool>>& visited){
        
        int n = grid.size();
        int m = grid[0].size();

        visited[row][column] = true;

        for(int k=0;k<4;k++){
            int nx= row+dx[k];
            int ny= column+dy[k];
            
            if(nx>=0 && nx<n && ny>=0 && ny<m && !visited[nx][ny] && grid[nx][ny]=='1'){
            dfs(grid,nx,ny,visited);}
        }
       
       

        
    }


  

    int numIslands(vector<vector<char>>& grid) {
          int count =0;
            vector<vector<bool>> visited(grid.size(),vector<bool> (grid[0].size(),false));

        for(int i =0;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                dfs(grid,i,j,visited);
                count++;}
            }
        }
        return count;
    }
};
