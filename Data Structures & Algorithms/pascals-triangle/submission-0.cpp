class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> a;
        for(int i =0;i<numRows;i++){
            a.push_back(vector<int>(i+1));

        }
        for(int i =0;i<numRows;i++){
            for(int j=0;j<a[i].size();j++){
                if(i-1<0 || j-1<0 || j>i-1){
                    a[i][j]=1;
                }
                else{
                    a[i][j]=a[i-1][j-1]+a[i-1][j];
                }
            }
        }

        return a;
    }
};