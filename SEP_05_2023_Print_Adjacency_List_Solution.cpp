#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        // Code here
        vector<vector<int>> ans(V);
        int n = edges.size();
        for(int i = 0; i<n; i++){
            ans[edges[i].first].push_back(edges[i].second);
            ans[edges[i].second].push_back(edges[i].first);
        }
        return ans;
    }
};