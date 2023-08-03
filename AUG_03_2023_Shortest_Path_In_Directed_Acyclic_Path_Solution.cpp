#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void solve(vector<int> &ans, vector<vector<int>> &v, int cur, int ind){
        if(cur >= ans[ind] && ans[ind] != -1) return;
        ans[ind] = cur;
        int n = v.size();
        for(int i = 0; i<n; i++){
            if(v[ind][i]) solve(ans,v,cur+v[ind][i],i);
        }
    }
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        vector<vector<int>> v(N,vector<int>(N,0));
        for(int i = 0; i<M; i++){
            v[edges[i][0]][edges[i][1]] = edges[i][2];
        }
        vector<int> ans(N,-1);
        solve(ans,v,0,0);
        return ans;
    }
};