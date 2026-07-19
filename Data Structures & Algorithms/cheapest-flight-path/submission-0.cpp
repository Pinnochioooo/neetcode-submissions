class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>> adj(n);
        vector<vector<int>> dist(n,vector<int>(k+2,INT_MAX));
        priority_queue<tuple<int,int,int>, vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;


        for(auto flight:flights){
            adj[flight[0]].push_back({flight[2],flight[1]});
        }

        pq.push({0,src,0});
        dist[src][0]=0;

        while(!pq.empty()){
            auto[curr,node,step] = pq.top();
            pq.pop();

            if(curr>dist[node][step])continue;
            if(step==k+1)continue;
            
            for(auto [weight,nei]:adj[node]){
                if(dist[node][step]+weight<dist[nei][step+1]){
                    dist[nei][step+1]=dist[node][step]+weight;
                    pq.push({dist[node][step]+weight , nei , step+1});
                }
            }
        }


        int ans = INT_MAX;
        for(int i =0 ; i<=k+1;i++){
            if(dist[dst][i]<ans){
                ans = dist[dst][i];
            }
        }
        if(ans == INT_MAX)return -1;
        return ans;
    }
};
