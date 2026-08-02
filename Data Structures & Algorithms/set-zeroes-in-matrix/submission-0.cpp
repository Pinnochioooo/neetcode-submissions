class Solution {
public:

    void makezero(vector<vector<int>>& matrix, vector<int>& row,vector<int>& col){

        for(int x: row){
            for(int p =0;p<matrix[0].size();p++){
                matrix[x][p]=0;
            }
        }

        for(int y:col){
            for(int q =0;q<matrix.size();q++){
                matrix[q][y]=0;
            }

        }

            
    }

    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> rowarr;
        vector<int> colarr;
        for(int i =0;i<matrix.size();i++){
            for(int j =0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    rowarr.push_back(i);
                    colarr.push_back(j);
                }
            }
        }
        makezero(matrix,rowarr,colarr);
    }
};
