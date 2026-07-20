class Solution {
public:


    int dfs(vector<int>& nums,vector<int>& output,int node){
        if(node>=nums.size())return 0;
        if(output[node]!=-1){
            return output[node];
        }
        

        output[node]=max(nums[node]+dfs(nums,output,node+2),dfs(nums,output,node+1));
            return output[node];
    }



    int rob(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        vector<int> output1(nums.size()-1,-1);
        vector<int> output2(nums.size()-1,-1);
        vector<int> first (nums.begin(),nums.end()-1);
        vector<int> second(nums.begin()+1,nums.end());

        int x =dfs(first,output1,0);
        int y = dfs(second,output2,0);
        return max(x,y);
        
    }
};
