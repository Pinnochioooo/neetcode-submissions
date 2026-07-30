class Solution {
public:

    int start;
    int flag =0;

    vector<int> dp;


    int dfs(vector<int>& gas,vector<int>& cost,int idx,int currgas,int viscount){
        currgas+=gas[idx];
        if(cost[idx]>currgas)return 0;
        currgas -=cost[idx];
        viscount++;
        if(viscount == gas.size())return 1;
        
        
            
            return dfs(gas,cost,(idx+1)%gas.size(),currgas ,viscount);
        
        

        

        
        
    }


    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {


        dp.assign(gas.size(),-1);

        for(int i =0;i<gas.size();i++){
            start =i;
            int viscount =0;
            
            if(dfs(gas,cost,i,0,viscount))return i;
            flag =0;
        }






        return -1;
    }
};
