class Solution {
public:
    bool dfs(vector<int>adj[],vector<int>&safe,vector<int>&visit,vector<int>&pathVisit,int node){
        visit[node]=1;
        pathVisit[node]=1;
        for(auto it:adj[node]){
            if(!visit[it]){
                if(dfs(adj,safe,visit,pathVisit,it)==true)return true;
            }
            else if(pathVisit[it]==1)return true;
        }
        safe[node]=1;
        pathVisit[node]=0;
        return false;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>adj[n];
        for(int i = 0;i<n;i++){
            for(auto it:graph[i]){
                adj[i].push_back(it);
            }
        }
        vector<int>visit(n,0);
        vector<int>pathVisit(n,0);
        vector<int>safe(n,0);
        for(int i = 0;i<n;i++){
            if(!visit[i]){
                dfs(adj,safe,visit,pathVisit,i);
            }
        }
        vector<int>ans;
        for(int i = 0;i<n;i++){
            if(safe[i]==1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};