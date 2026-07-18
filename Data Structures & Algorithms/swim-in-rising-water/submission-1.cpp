class Solution {
public:

    vector<int> dx = {0,0,1,-1};
    vector<int> dy = {1,-1,0,0};

    int swimInWater(vector<vector<int>>& grid) {
        priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
        int row = grid.size();
        int x,y,nx,ny,wt;
        vector<vector<int>> dist(row,vector<int>(row,-1));
        dist[0][0]=grid[0][0];
        pq.push({grid[0][0],0,0});


        while(!pq.empty()){
            auto [wt,x,y] = pq.top();
            pq.pop();


            for(int k =0;k<4;k++){
                nx = x+dx[k];
                ny = y+dy[k];

                if(x+dx[k]<row && y+dy[k]<row && x+dx[k]>=0 && y+dy[k]>=0){
int newCost = max(wt, grid[nx][ny]);
                if (dist[nx][ny] == -1 || newCost < dist[nx][ny]) {
    dist[nx][ny] = newCost;
    pq.push({newCost, nx, ny});
}

                }
            }
        }

        return dist[row-1][row-1];

    }
};
