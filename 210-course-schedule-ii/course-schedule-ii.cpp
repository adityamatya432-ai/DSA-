class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
        int n = numCourses;
        int s = pre.size();
        vector<int>adj[n];
        for(int i = 0;i<s;i++){
            int u = pre[i][0];
            int v =  pre[i][1];
            adj[v].push_back(u);
        }
        vector<int>inDeg(n,0);
        for(int i = 0;i<n;i++){
            for(auto it:adj[i]){
                inDeg[it]++;
            }
        }
        queue<int>q;
        for(int i = 0;i<n;i++){
            if(inDeg[i]==0){
                q.push(i);
            }
        }
        vector<int>arr;
        while(!q.empty()){
            int node = q.front();
            arr.push_back(node);
            q.pop();
            for(auto it:adj[node]){
                inDeg[it]--;
                if(inDeg[it]==0){
                    q.push(it);
                }
            }
        }

        if(arr.size()==n)return arr;
        vector<int>output;
        return output;
        
    }
};