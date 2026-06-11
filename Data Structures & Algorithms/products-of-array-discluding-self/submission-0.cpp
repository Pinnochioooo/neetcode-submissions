class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> left (size,0);
        vector<int> right(size,0);
        vector<int> output(size,0);

        int leftproduct=1,rightproduct=1;
        for(int i=0;i<size;i++){
            left[i]=leftproduct;
             leftproduct=leftproduct*nums[i];

        }

        for(int i = size-1;i>=0;i--){
            right[i]=rightproduct;
            rightproduct = rightproduct*nums[i];
        }

        for(int i=0;i<size;i++){
            output[i]=left[i]*right[i];
        }
        return output;
    }
};
