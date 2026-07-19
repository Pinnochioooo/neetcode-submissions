class Solution {
public:

    int climb(vector<int>& output, vector<int>& cost,int n){
        
        if(n==0) {
            if(output[0]==-1)output[0]=cost[0];
            return output[0];}
              if (n == 1)
            return output[1] = cost[1];

        if (output[n] != -1)
            return output[n];

        else{output[n-1]=climb(output,cost,n-1);
            output[n-2]=climb(output,cost,n-2);
            output[n]=cost[n]+min(output[n-1],output[n-2]);
            return cost[n] +min( output[n-1],output[n-2]);
            }
    }


    int minCostClimbingStairs(vector<int>& cost) {
        reverse(cost.begin(),cost.end());
        vector<int> output(cost.size(),-1);
         
         return min(climb(output,cost,cost.size() -1),climb(output,cost,cost.size() -2));
    }
};
