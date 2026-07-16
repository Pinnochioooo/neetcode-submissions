class Solution {
public:

    

    void dfs(unordered_map<string,vector<string>>& graph,vector<string>& output,string node){
        
        



        while(!graph[node].empty()){
            string next = graph[node].back();
            


            graph[node].pop_back();
            dfs(graph,output,next);
        
    }
    output.push_back(node);
    }



    vector<string> findItinerary(vector<vector<string>>& tickets) {
        
        unordered_map<string,vector<string>> graph;
        
        vector<string> output;

        for(auto edge:tickets){
            graph[edge[0]].push_back(edge[1]);
        }


        for(auto &[u,adj]:graph){
            sort(adj.rbegin(), adj.rend());
        }

        dfs(graph,output,"JFK");

reverse(output.begin(),output.end());
return output;



    }
};
