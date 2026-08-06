class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph, vector<int>& state) {

        if (state[node] == 1)
            return false;          // Cycle found

        if (state[node] == 2)
            return true;           // Already known to be safe

        if (state[node] == 3)
            return false;          // Already known to be unsafe

        state[node] = 1;           // Mark as visiting

        for (int nei : graph[node]) {
            if (!dfs(nei, graph, state)) {
                state[node] = 3;   // Unsafe
                return false;
            }
        }

        state[node] = 2;           // Safe
        return true;
    }

    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int n = graph.size();
        vector<int> state(n, 0);
        vector<int> ans;

        for (int i = 0; i < n; i++) {
            if (dfs(i, graph, state))
                ans.push_back(i);
        }

        return ans;
    }
};