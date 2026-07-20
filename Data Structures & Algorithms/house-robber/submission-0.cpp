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
        vector<int> output(nums.size(),-1);

        int x =dfs(nums,output,0);
        return x;
    }
};
