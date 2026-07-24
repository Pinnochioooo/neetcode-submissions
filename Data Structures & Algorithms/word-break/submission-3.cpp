class Solution {
public:

    bool dfs(string s,int i,unordered_map<string,bool>& hash,vector<int>& dp){
        if(i==s.size())return true;
        if(dp[i]){
            if(dp[i]==1)return true;
            return false;
        }

        int curridx =i;
        while(curridx<s.size() ){
            if(hash[s.substr(i,curridx-i+1)]){
                if(dfs(s,curridx+1,hash,dp)){
                    if(curridx+1 < s.size())dp[curridx+1]=1;
                    return true;}
            }
            curridx++;
        }

        dp[i]=-1;
        return false;

        
    }


    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,bool> hash;
        vector<int> dp(s.size(),0);
        
        for(auto word:wordDict){
            hash[word]=true;
        }


        return dfs(s,0,hash,dp);
    }
};
