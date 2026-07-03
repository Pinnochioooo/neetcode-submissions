class Solution {
public:

    bool dfs(vector<vector<int>>& graph,vector<bool>& visited,int node,int parent){
        visited[node]=true;

        for(int nei:graph[node]){

            if(!visited[nei]){
                if(dfs(graph,visited,nei,node))
                return true;
            }
            
            else{
                if(nei != parent)return true;
            }


        }
        return false;
    }





    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        vector<bool> visited(n,false);

        for(auto edge:edges){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        if(dfs(graph,visited,0,-1))return false;

        for(int i =0;i<n;i++){
            if(!visited[i])return false;
        }




return true;




    }
};
