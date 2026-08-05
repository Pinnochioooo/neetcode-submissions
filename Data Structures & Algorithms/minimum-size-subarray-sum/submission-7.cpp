class Solution {
public:


    /*int solver(int target, vector<int>& nums){
        int left =0;
        int right = 0;
        int minlength =0;
        int sum =0;
        int curr =0;

        while(left<nums.size() && right<nums.size()){
            if(sum>= target){
                left = right;
                if(curr<minlength)minlength = curr;
            }

        right++;
        sum+=nums[right];
        curr++;

        }


    }*/

    int solver2(int target, vector<int>& nums){
        int left =0;
        int right =0;
        int minlength = INT_MAX;
        int sum =nums[0];
        

        while(left<nums.size() && right < nums.size()){
            


            
               
                   
                        

                        
                    

            while(sum>=target) { minlength = min(minlength,right-left+1);
                sum-=nums[left];
                left++;
                
            
                }

                         right++; 
                        if(right<nums.size())sum+=nums[right];


        }

        

return minlength;
    }





    int minSubArrayLen(int target, vector<int>& nums) {
        int x = solver2(target,nums);
        if(x== INT_MAX)return 0;
        else{return x;}
    }
};