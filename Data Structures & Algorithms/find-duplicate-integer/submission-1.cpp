class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size = nums.size();
        int num;
        int output =0;
        for(int i =0;i<size;i++){
            num = nums[abs(nums[i]) -1];
           if( num >= 0){
                nums[abs(nums[i]) -1] *= -1;
           } 
           else {
            output = abs(nums[i]);
            break;
           }
        }
        return output;
    }
};
