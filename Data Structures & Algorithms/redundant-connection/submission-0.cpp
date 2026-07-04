class Solution {
public:


        vector<int> parent;
        vector<int> rank;

    int find(int x){
        if(parent[x]==x)
            return x;

           return parent[x]= find(parent[x]);
    }


    bool unite(int x ,int y){
        int px = find (x);
        int py = find (y);

        if(px==py)return false;

        if(rank[px]>rank[py]){
            parent[py]=px;
        }

        else if(rank[py]>rank[px]){
            parent[px]=py;
        }

        else{
            rank[px]++;
            parent[py]=px;
        }

        return true;
    }


    vector<int> findRedundantConnection(vector<vector<int>>& edges) {

        int edge_size = edges.size();
        int n= edge_size+1;

        parent.resize(n);
        rank.resize(n,0);
        

        for(int i =1;i<n;i++){
            parent[i]=i;
        }

        for(auto edge:edges){

            if(unite(edge[0],edge[1])==false)
            return edge;
        }

        return edges[edges.size() -1];
    }
};
