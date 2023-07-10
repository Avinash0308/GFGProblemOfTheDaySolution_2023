class Solution {
  public:
    int shortestXYDist(vector<vector<char>> grid, int N, int M) {
        // code here
        vector<vector<int>> v(N,vector<int> (M,N*M));
        for(int i = 0; i<N; i++){
            for(int j = 0;j <M ;j ++){
                if(grid[i][j] != 'X'){
                    if(i>0){
                        v[i][j] = min(v[i][j],v[i-1][j]+1);
                    }
                    if(j>0){
                        v[i][j] = min(v[i][j],v[i][j-1]+1);
                    }
                }
                else{
                    v[i][j] = 0;
                }
            }
        }
        for(int i = N-1; i>=0; i--){
            for(int j = M-1; j>=0; j--){
                if(grid[i][j] != 'X'){
                    if(i<N-1){
                        v[i][j] = min(v[i][j],v[i+1][j]+1);
                    }
                    if(j<M-1){
                        v[i][j] = min(v[i][j],v[i][j+1]+1);
                    }
                }
            }
        }
        int ans = INT_MAX;
        for(int i = 0; i<N ; i++){
            for(int j = 0; j<M; j++){
                if(grid[i][j] == 'Y') ans = min(ans,v[i][j]);
            }
        }
        return ans;
    }
};
