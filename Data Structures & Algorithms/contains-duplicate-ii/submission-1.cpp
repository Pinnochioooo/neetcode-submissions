class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,bool> hash;

        for(int i =0;i<k;i++){
            if(hash[nums[i]]==true)return true;
            hash[nums[i]]=true;
        }

        int right = k;
        int left = 0;
        
        while(right<nums.size()){
            if(hash[nums[right]]==true)return true;
            hash[nums[right]]=true;

            hash[nums[left]]=false;
            right++;
            left++;
        }


        return false;

    }
};