class Solution {
public:

    vector<vector<int>> ans;
    vector<int> curr;

    void subset(vector<int>& nums,int idx){
        
            ans.push_back(curr);
           

        for(int i =idx;i<nums.size();i++){

        if(i>idx &&nums[i]==nums[i -1])continue;
        curr.push_back(nums[i]);
        subset(nums,i+1);
        curr.pop_back();
        
        
        }
        
        
    }


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        subset(nums,0);
        return ans;
    }
};
