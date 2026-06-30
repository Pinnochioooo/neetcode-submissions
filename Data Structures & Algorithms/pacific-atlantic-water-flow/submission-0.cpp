class Solution {
public:

    vector<int> dx = {0,0,-1,1};
    vector<int> dy = {-1,1,0,0};

    

    

    void dfsatlantic(vector<vector<int>>& heights,int x,int y,vector<vector<bool>>& visited){
        if(visited[x][y])return;
        visited[x][y] = true;
        

        for(int k =0;k<4;k++){
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx>= 0 && ny>= 0 && nx< heights.size() && ny< heights[0].size() && heights[nx][ny]>=heights[x][y]){
                dfsatlantic(heights,nx,ny,visited);
            }
        }
    }



    void dfspacific(vector<vector<int>>& heights,int x,int y,vector<vector<bool>>& visited){
        if(visited[x][y])return;
        visited[x][y] = true;
        

        for(int k =0;k<4;k++){
            int nx = x + dx[k];
            int ny = y + dy[k];

            if(nx>= 0 && ny>= 0 && nx< heights.size() && ny< heights[0].size() && heights[nx][ny]>=heights[x][y]  ){
                dfspacific(heights,nx,ny,visited);
            }
        }
    }


    

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<bool>> visited_atlantic (heights.size(),vector<bool>(heights[0].size(),false));
        vector<vector<bool>> visited_pacific (heights.size(),vector<bool>(heights[0].size(),false));

        vector<vector<int>> output;

        for(int i =0;i<heights[0].size();i++){
            if(!visited_atlantic[heights.size() -1][i])dfsatlantic(heights,heights.size() -1,i ,visited_atlantic);
        }
        
        for(int i =0;i<heights.size() ;i++){
            if(!visited_atlantic[i][heights[0].size() -1])dfsatlantic(heights,i,heights[0].size() - 1,visited_atlantic);
        }


        for(int i =0;i<heights.size();i++){
            if(!visited_pacific[i][0])dfspacific(heights,i,0  , visited_pacific);
        }

        for(int i =0;i<heights[0].size();i++){
            if(!visited_pacific[0][i])dfspacific(heights,0,i,visited_pacific);
        }


        for(int i =0;i<heights.size();i++){
            for(int j =0;j<heights[0].size();j++){
                if(visited_pacific[i][j] && visited_atlantic[i][j]){
                    output.push_back({i,j});
                }
            }
        }

        return output;
    }
};
