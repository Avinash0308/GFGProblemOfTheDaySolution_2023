class Solution{   
public:
    long long int distinctColoring(int N, int r[], int g[], int b[]){
        long long int dp[3][N];
        dp[0][N-1] = r[N-1];
        dp[1][N-1] = g[N-1];
        dp[2][N-1] = b[N-1];
        for(int i = N-2; i>=0; i--){
            dp[0][i] = r[i] + min(dp[1][i+1], dp[2][i+1]);
            dp[1][i] = g[i] + min(dp[2][i+1], dp[0][i+1]);
            dp[2][i] = b[i] + min(dp[1][i+1], dp[0][i+1]);
        }
        return min(dp[0][0] , min(dp[1][0] , dp[2][0]));
    }
};
