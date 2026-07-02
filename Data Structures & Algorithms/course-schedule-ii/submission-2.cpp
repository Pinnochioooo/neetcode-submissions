class Solution {
public:

    bool dfs(vector<vector<int>>& course,vector<bool>& visited, vector<bool>& pathvisited,vector<int>& order,int node){
        
        visited[node]=true;
        pathvisited[node]=true;
        
        for(int nei:course[node]){
            if(!visited[nei]){
                if(dfs(course,visited,pathvisited,order,nei))
                    return true;
                
            }
            
               else if(pathvisited[nei])return true;

            
        }
        pathvisited[node]=false;
        order.push_back(node);
        return false;
    }




    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> order;
        vector<bool> visited(numCourses,false);
        vector<bool> pathvisited(numCourses,false);
        vector<vector<int>> course(numCourses);
        
        for(auto x:prerequisites){
            course[x[1]].push_back(x[0]);
        }
        
        for(int i =0;i<numCourses;i++){
            if(!visited[i]){
                if(dfs(course,visited,pathvisited,order,i))
                    return{};
            }
        }
        reverse(order.begin(),order.end());


        return order;
    }





};
