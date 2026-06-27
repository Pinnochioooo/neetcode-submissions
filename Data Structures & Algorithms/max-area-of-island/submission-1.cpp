class Solution {
public:

    vector<int> dx = {0,0,-1,1};
    vector<int> dy= {1,-1,0,0};
    int max =0;

    void dfs(vector<vector<int>>& grid,int x, int y, vector<vector<bool>>& visited,int& tempmax){
        visited[x][y]=true;
        tempmax++;
        if(tempmax> max)max = tempmax;

        for(int k =0;k<4;k++){
            int nx=x+dx[k];
            int ny=y+dy[k];
            if(nx>=0 && ny>=0 && nx <grid.size() && ny<grid[0].size() && !visited[nx][ny] &&  grid[nx][ny]==1){
                    dfs(grid,nx,ny,visited,tempmax);
            }
        }
    }



    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size(),false));
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!visited[i][j] && grid[i][j]){
                    int tempmax =0;
                dfs(grid,i,j,visited,tempmax);

                }
            }
        }
        return max;
    
    }
};
