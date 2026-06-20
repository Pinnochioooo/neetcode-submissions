class Solution {
public:

    vector<vector<int>> ans;
    vector<int> curr;

    void subset(int idx, vector<int>& nums){
        if(idx == nums.size()){
            ans.push_back(curr);
            return;
        }

        curr.push_back(nums[idx]);
        subset(idx+1,nums);
        
        curr.pop_back();
        subset(idx+1,nums);
        
    }


    vector<vector<int>> subsets(vector<int>& nums) {
        subset(0,nums);
        return ans;
    }
};
