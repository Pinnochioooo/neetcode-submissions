class Solution {
public:

    vector<int> dx = {0,0,-1,1};
     vector<int> dy = {1,-1,0,0};

    int orangesRotting(vector<vector<int>>& grid) {
        int output =0;

        queue<pair<int,int>> q;

        for(int i =0;i<grid.size();i++){
            for(int j = 0; j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
            }
        }


        while(!q.empty()){
            int sz = q.size();

        while(sz--){
            
            auto[x,y]=q.front();
            q.pop();
            for(int k =0;k<4;k++){
                int nx = x + dx[k];
                int ny = y + dy[k];

                if(nx>=0 && ny>=0 && nx<grid.size() && ny<grid[0].size() && grid[nx][ny] == 1){
                    grid[nx][ny] = 2;
                    q.push({nx,ny});
                }
            }
        }
        if(!q.empty())output++;
        }


        for(int i =0;i<grid.size();i++){
            for(int j = 0; j<grid[0].size();j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
        }

    return output;
    }
};
