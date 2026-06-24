class Solution {
public:

    bool find(vector<vector<char>>& board, string word,int idx,int row,int column){
        if(idx== word.size()){
            return true;
        }

        if(row>=board.size() || column >= board[0].size()|| row<0||column< 0||board[row][column]!=word[idx])return false;

        
           char temp = board[row][column];
        
        board[row][column]='#';

        bool found =
        find(board,word,idx+1,row+1,column)||
        find(board,word,idx+1,row-1,column)||
        find(board,word,idx+1,row,column-1)||
        find(board,word,idx+1,row,column+1);
        
        board[row][column]=temp;
        return found;
    }



    bool exist(vector<vector<char>>& board, string word) {
                for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (find(board, word, 0, i, j))
                    return true;
            }
        }

        return false;

    }
};
