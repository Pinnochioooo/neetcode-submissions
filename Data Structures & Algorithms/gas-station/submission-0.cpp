class Solution {
public:

    int start;
    int flag =0;

    vector<int> dp;


    int dfs(vector<int>& gas,vector<int>& cost,int idx,int currgas){
        if(flag && idx == start)return 1;
        flag =1;
        currgas+=gas[idx];
        if(cost[idx]>currgas)return 0;
        else {
            
            return dfs(gas,cost,(idx+1)%gas.size(),currgas - cost[idx]);
        }
    }


    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {


        dp.assign(gas.size(),-1);

        for(int i =0;i<gas.size();i++){
            start =i;
            
            if(dfs(gas,cost,i,0))return i;
            flag =0;
        }






        return -1;
    }
};
