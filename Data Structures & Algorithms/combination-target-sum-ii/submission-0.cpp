class Solution {
public:

    vector<vector<int>> ans;
    vector<int> curr;

    void combine(vector<int>& candidates, int target,int idx){
        if(target == 0){
            ans.push_back(curr);
            return;
        }
        if(target<0)return;
        if(idx == candidates.size())return;
        

        for(int i =idx;i<candidates.size();i++){

            if(i>idx){
                if(candidates[i]==candidates[i-1]){
                    continue;
                }
            }
        curr.push_back(candidates[i]);
        combine(candidates,target-candidates[i],i+1);
        curr.pop_back();}

    }


    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        combine(candidates,target,0);
        return ans;
    }
};
