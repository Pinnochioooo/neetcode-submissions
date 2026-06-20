class Solution {
public:

    vector<vector<int>> ans;
    vector<int> curr;
    void combinator(vector<int> & nums, int target,int idx){
            if( target==0){
                ans.push_back(curr);
                return;
            }

            if(idx == nums.size())return;
            

            
            if(nums[idx]<=target){
                curr.push_back(nums[idx]);
                
                combinator(nums,target - nums[idx],idx);
                curr.pop_back();
                }
            
           
            
            combinator(nums,target,idx+1);
            
            
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        combinator(nums,target,0);
        return ans;
    }
};
