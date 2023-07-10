class Solution {
  public:
    int uniquePaths(int n, int m, vector<vector<int>> &grid) {
        // code here
        int mod = 1e9+7;
        if(grid[0][0] == 0 || grid[n-1][m-1] == 0) return 0;
        vector<vector<int>> v(n,vector<int> (m));
        v[n-1][m-1] = 1;
        for(int i = n-1; i>=0; i--){
            for(int j = m-1; j>=0; j--){
                if(grid[i][j]){
                    if(i>0 && grid[i-1][j]) v[i-1][j] = (v[i-1][j] + v[i][j])%mod;
                    if(j>0 && grid[i][j-1]) v[i][j-1] = (v[i][j-1] + v[i][j])%mod;
                }
            }
        }
        return v[0][0];
    }
};
