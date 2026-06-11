class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash;
        int temp,max=1,currentmax;
        if(nums.size()==0)return 0;
        for(int x :nums){
            hash.insert(x);
        }
        
        vector<int> start;
        for(int x: nums){
            if(!hash.count(x-1)){
                start.push_back(x);
            }
        }

        for(int x:start){
            currentmax=1;
            temp = x;
            while(hash.count(temp+1)){
                currentmax++;
                temp++;
                if(currentmax>max){
                    max=currentmax;
                }
            }
        }
        return max;
    }
};
