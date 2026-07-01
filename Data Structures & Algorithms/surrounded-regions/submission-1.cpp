class Solution {
public:

    vector<int> dr={0,0,-1,1};
    vector<int> dc={-1,1,0,0};

    void dfs(vector<vector<char>>& board,int r, int c, vector<vector<bool>>& visited){
        if(visited[r][c])return;
        visited[r][c]=true;

        for(int k =0;k<4;k++){
            int nr = r + dr[k];
            int nc = c + dc[k];

            if(nr>=0 && nc>=0 && nr<board.size() && nc<board[0].size() && board[nr][nc] == 'O'){
                dfs(board,nr,nc,visited);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        vector<vector<bool>> visited(board.size(),vector<bool>(board[0].size(), false));

        for(int i =0;i<board.size();i++){
            if(board[i][0] == 'O') dfs(board,i,0,visited);
            if(board[i][board[0].size()-1] == 'O') dfs(board,i, board[0].size() -1, visited);
        }

        for(int i =0;i<board[0].size();i++){
            if(board[0][i] == 'O')dfs(board,0,i,visited);
            if(board[board.size() - 1][i] == 'O')dfs(board,board.size() - 1 ,i, visited);
        }


        for(int i =0;i<board.size();i++){
            for(int j =0;j<board[0].size();j++){
                if(!visited[i][j])board[i][j]='X';
            }
        }

    }
};
