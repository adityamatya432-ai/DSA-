class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>adj[n];
        vector<int>inDeg(n,0);
        for(int i = 0;i<n;i++){
            for(auto it:graph[i]){
                adj[it].push_back(i);
                inDeg[i]++;
            }
        }
        vector<int>visit(n,0);
        queue<int>q;
        for(int i = 0;i<n;i++){
            if(inDeg[i]==0){
                q.push(i);
                visit[i]=1;
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                inDeg[it]--;
                if(inDeg[it]==0)q.push(it);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
      
    }
};