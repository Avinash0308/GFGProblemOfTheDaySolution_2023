#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void solve(int v, vector<int> adj[], vector<int> &ans, int ind,vector<int> &visit){
        if(ind == v) return;
        if(visit[ind]) return;
        visit[ind] = 1;
        ans.push_back(ind);
        int n = adj[ind].size();
        for(int i = 0; i<n; i++){
            solve(v,adj,ans,adj[ind][i],visit);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> visit(V);
        vector<int> ans;
        solve(V,adj,ans,0,visit);
        return ans;
    }
};
int main(){
    return 0;
}