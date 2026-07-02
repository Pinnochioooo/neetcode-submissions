class Solution {
public:

    bool dfs(vector<vector<int>>& course,int node,vector<bool>& visited, vector<bool>& pathvisited,  int size){
        visited[node]=true;
        pathvisited[node]= true;

        for(int nei:course[node]){
            if(!visited[nei]){
                if(dfs(course,nei,visited,pathvisited,size))
                    return true;
                }
                else if(pathvisited[nei]){
                    return true;
                }

        }
        pathvisited[node] = false;
        return false;
    }




    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> course(numCourses);
        vector<bool> visited(numCourses,false);
        vector<bool> pathvisited(numCourses,false);

        for(auto& edge:prerequisites){
            int u = edge[0];
            int v = edge[1];
            course[u].push_back(v);
        }


        for(int i=0;i<numCourses;i++){
            if(!visited[i]){
                if(dfs(course,i,visited,pathvisited,numCourses))
                return false;
            }
        }

        return true;
    }
};
