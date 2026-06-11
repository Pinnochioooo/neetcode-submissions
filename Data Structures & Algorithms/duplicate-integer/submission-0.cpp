class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map <int,int> hash;
        int size = nums.size();
        int flag =0;
        for(int i=0;i<size;i++){
            if(!hash[nums[i]])hash[nums[i]]=1;
            else{flag =1;}

            
        }
        if(flag)return true;
        else return false;
    }
};