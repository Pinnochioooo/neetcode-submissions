class Solution {
public: 

int size;
     vector<vector<string>> solveNQueens(int n) {
        

    maindiag.assign(2*n-1,false);
    antidiag.assign(2*n-1,false);
    
    column.assign(n,false);
board.assign(n, string(n,'.'));


        
        recurse(n,0);




        return ans;
    }




    
    vector<bool> maindiag;
    vector<bool> antidiag;
    
    vector<bool> column;

    
    vector<vector<string>> ans;
    vector<string> board;
    

    void recurse(int n,int idx){
        if(idx==n){
            ans.push_back(board);
            return;
        }

    for(int c=0;c<n;c++){
        if(maindiag[idx - c +n-1] || antidiag[idx+c]  || column[c]){
            continue;}
        

            board[idx][c]='Q';

            maindiag[idx - c +n-1] =true;
            antidiag[idx+c] =true;
            
            column[c]=true;

            recurse(n,idx+1);
            board[idx][c]='.';
            maindiag[idx - c +n-1] =false;
            antidiag[idx+c] =false;
            
            column[c]=false;

            

          
          }
          
    }


   
};
