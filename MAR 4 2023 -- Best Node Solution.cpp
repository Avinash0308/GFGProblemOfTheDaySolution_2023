#define ll long long 
class Solution {
  public:
    pair<ll,ll> dfs(int i,vector<vector<int>> &adj,vector<int> &a,vector<int> &vis,ll &ans){
        vis[i]=1;
        ll minValue=1e10,maxValue=-1e10;
        int flag=0;
        for(auto &x:adj[i]){
            if(!vis[x]){
                flag=1;
                auto childVal=dfs(x,adj,a,vis,ans);
                minValue=min(minValue,a[i-1]-childVal.second);
                maxValue=max(maxValue,a[i-1]-childVal.first);
            }
        }
        if(!flag){
            ll ans1=a[i-1];
            ans=max(ans,ans1);
            return {ans1,ans1};
        }
        ans=max(ans,maxValue);
        return {minValue,maxValue};
    }
    long long bestNode(int N, vector<int> &A, vector<int> &P) {
        vector<vector<int>> adj(N+1);
        vector<int> vis(N+1,0);
        for(int i=1;i<N;i++){
            adj[P[i]].push_back(i+1);
            adj[i+1].push_back(P[i]);
        }
        ll ans=-1e10;
        dfs(1,adj,A,vis,ans);
        return ans;
    }
};
