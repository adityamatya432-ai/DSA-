class Solution {
public:
    void dfs(vector<int>&pathVisit ,vector<int>adj[],vector<vector<int>>&ans,int node,vector<int>&curr,int target){
        curr.push_back(node);
        pathVisit[node]=1;
        if(node==target){
            ans.push_back(curr);
            pathVisit[node]=0;
            curr.pop_back();
            return;
        }
        for(auto it:adj[node]){
            if(pathVisit[it]==0){
                dfs(pathVisit,adj,ans,it,curr,target);
            }
        }
        pathVisit[node]=0; 
        curr.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>>ans;
        vector<int>pathVisit(n,0);
        vector<int>adj[n];
        for(int i = 0;i<n;i++){
            for(auto it:graph[i]){
                adj[i].push_back(it);
            }
        }
        vector<int>curr;
        int target = n-1;
        dfs(pathVisit,adj,ans,0,curr,target);
        return ans;
         
    }
};