#include<bits/stdc++.h>
using namespace std;
class Solution
{
	public:
	//Function to find the level of node X.
	int ans = INT_MAX;
	int val;
	bool done = false;
	void solve(int i, vector<int> adj[], int h, vector<int> &visit){
	    if(i == val){
	        ans = h;
	        done = true;
	        return;
	    }
	    if(visit[i]) return;
	    visit[i] = 1;
	    int n = adj[i].size();
	    for(int j = 0; j<n && !done; j++){
	        solve(adj[i][j],adj,h+1,visit);
	    }
	}
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    val = X;
	    vector<int> visit(V);
	    solve(0,adj,0,visit);
	    return (ans == INT_MAX)?-1:ans;
	}
};