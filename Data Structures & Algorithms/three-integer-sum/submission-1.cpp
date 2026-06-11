class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size = nums.size();
        vector<vector<int>> output;

        for(int i =0;i<size;i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            int left =i+1, right = size -1;
            int sum =0;

            while(left<right){
                sum =nums[left]+nums[right];
                if(sum==target){
                    output.push_back({nums[i],nums[left],nums[right]});
                    while (left < right && nums[left] == nums[left+1]) left++;
                    while (left < right && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
                }
                else if(sum>target)right--;
                else left++;
            }
        }
        return output;
    }
};
