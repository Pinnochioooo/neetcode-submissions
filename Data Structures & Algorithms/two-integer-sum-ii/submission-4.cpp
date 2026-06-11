class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left =0,right =numbers.size()-1;
        vector<int>output;

        while(left<=right){
            if(numbers[left]+numbers[right]>target){
                right--;
            }
            else if(numbers[left]+numbers[right]<target){
                left++;
            }
            else{
                    output.push_back(left+1);
                    output.push_back(right+1);
                    break;
            }

        }
        return output;
    }
};
