class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<bool>vis(points.size(),false);
        priority_queue< pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int n = points.size();

        int manhattan,cost =0,count =0;
        pq.push({0,0});

        while(!pq.empty() && count<n){
            auto[wt,node] = pq.top();
            pq.pop();

            if(vis[node])continue;
            vis[node]=true;
            cost+=wt;
            count++;
            for(int next = 0;next<n;next++){

                if(vis[next])continue;
                manhattan = abs(points[node][0] - points[next][0]) + abs(points[node][1] - points[next][1]);
                pq.push({manhattan,next});

            }
        }
    return cost;
        
    }
};
