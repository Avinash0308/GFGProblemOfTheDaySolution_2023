class Solution {
  public:
    vector<int> solve(vector<pair<int,int>> v[] , int src , int n){
        vector<int> dist(n,1e9);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        dist[src] = 0;
        pq.push({0,src});
        while(!pq.empty()){
            auto cur = pq.top();
            pq.pop();
            int dis = cur.first;
            int node = cur.second;
            for(auto it:v[node]){
                int x = it.first;
                int wt = it.second;
                if(dist[x] > dist[node] + wt){
                    dist[x] = dist[node] + wt;
                    pq.push({dist[x],x});
                }
            }
        }
        return dist;
    }
    int shortestPath(int n, int m, int a, int b, vector<vector<int>> &edges) {
        vector<pair<int,int>> v[n+1];
        for(int i = 0; i<m ; i++){
            int u = edges[i][0], x = edges[i][1] , wt = edges[i][2] , cwt = edges[i][3];
            v[u].push_back({x,wt});
            v[x].push_back({u,wt});
        }
        vector<int> ans1 = solve(v,a,n+1);
        vector<int> ans2 = solve(v,b,n+1);
        int ans = ans1[b];
        for(int i =0; i<m ; i++){
            int u = edges[i][0], vv = edges[i][1] , wt = edges[i][3];
            ans = min(ans,ans1[u]+wt+ans2[vv]);
            ans = min(ans,ans2[u]+wt+ans1[vv]);
        }
        if(ans >= 1e9) return -1;
        return ans;
    }
};
