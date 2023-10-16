#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // dp is to to store that which 1's can be clubbed together and 
    // how many are there in one group can be stored in map
    vector<vector<int>> dp;
    unordered_map<int, int> mp;
    
    int dx[4] = {-1, +1, 0, 0};
    int dy[4] = {0, 0, -1, +1};
    
    int dfs(int x, int y, int m, int n, vector<vector<int>>& grid, int idx){
        dp[x][y]=idx;
        int count=0;
        for(int i=0; i<4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]==1 && dp[nx][ny]==-1){
                count+=dfs(nx, ny, m, n, grid, idx);
            }
        }
        // +1 for that 1
        return count+1;
    }
    int largestIsland(vector<vector<int>>& grid) 
    {
        // Your code goes here.
        int m = grid.size();
        int n = grid[0].size();
        dp.resize(m, vector<int>(n, -1));
        int idx = 0;
        int res = 0;
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==1 && dp[i][j]==-1){
                    int count = dfs(i, j, m, n, grid, idx);
                    // cout<<count<<" ";
                    mp[idx] = count;
                    idx++;
                    res = max(res, count);
                }
                
            }
        }
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(grid[i][j]==0){
                    int count=0;
                    // Inserting in the set will be O(1) space as max to max 4 entries
                    unordered_set<int> s;
                    for(int k=0; k<4; ++k){
                        int nx = i + dx[k];
                        int ny = j + dy[k];
                        if(nx>=0 && nx<m && ny>=0 && ny<n && grid[nx][ny]==1){
                            // used set because all the 4 neighbours can be from same group
                            s.insert(dp[nx][ny]);
                        }
                    }
                    for(auto x : s){
                        count+=mp[x];
                    }
                    // +1 to include that 0 
                    res = max(res, count+1);
                }
            }
        }
        return res;
    }
};