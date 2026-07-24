class Solution {
public:

    void tracker(vector<int>& nums,int& maxi){
        int currmax=nums[0] ,currmin=nums[0];
        

        for(int i =1;i<nums.size();i++){
            int temp = currmax;
            currmax = max({currmax*nums[i],currmin*nums[i],nums[i]});
            if(currmax>maxi)maxi = currmax;
            currmin = min({temp*nums[i],currmin*nums[i],nums[i]});

        }

        
    }




    int maxProduct(vector<int>& nums) {
        int maxi =INT_MIN;
        if(nums.size()==1)return nums[0];
        tracker(nums,maxi);

        return maxi;
    }
};
