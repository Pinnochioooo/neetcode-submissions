class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1,INT_MAX);
        vector<vector<pair<int,int>>> adj(n+1);
        dist[k]=0;

        priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;

        for(auto x:times){
            adj[x[0]].push_back({x[2],x[1]});
        }

    pq.push({0,k});
        
        while(!pq.empty()){

            auto[weight,node]=pq.top();
            pq.pop();

            if(dist[node]<weight){
                continue;
            }
            
            

            for(auto[w,nei] : adj[node]){
                if(dist[node]+w < dist[nei]){
                dist[nei] = dist[node] + w;
                pq.push({dist[node]+w,nei});}

            }

        }

        int max = 0;

        for(int i =1;i<n+1;i++){
            if(dist[i]==INT_MAX)return -1;

            if(dist[i]>max)max=dist[i];
        }

return max;


    }

};
