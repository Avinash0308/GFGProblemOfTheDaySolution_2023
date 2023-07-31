#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        vector<int> visit(V);
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int ind = q.front();
            q.pop();
            if(visit[ind]) continue;
            ans.push_back(ind);
            visit[ind] = 1;
            int n = adj[ind].size();
            for(int j = 0; j<n; j++){
                q.push(adj[ind][j]);
            }
        }
        return ans;
    }
};