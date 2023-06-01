class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void solve(vector<int> adj[], vector<int> &visit, int u, vector<int> &ans){
	    if(visit[u]) return;
	    visit[u] = 1;
	    for(auto i:adj[u]){
	        solve(adj,visit,i,ans);
	    }
	    ans.push_back(u);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> ans;
	    vector<int> visit(V+1);
	    for(int i = 0; i<V; i++){
	        if(visit[i]) continue;
	        solve(adj,visit,i,ans);
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}
};
