#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool solve(int i, int j, int n, int m, vector<vector<int>> &dp, string &wild, string &pattern){
        if(i == n && j == m) return 1;
        else if(i >=n || j >= m) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        if(wild[i] == '?'){
            return dp[i][j] = solve(i+1,j+1,n,m,dp,wild,pattern);
        }
        else if(wild[i] == '*'){
            for(int ind = 0; ind+j<=m; ind++){
                if(solve(i+1,j+ind,n,m,dp,wild,pattern)){
                    return dp[i][j] = 1;
                }
            }
            return dp[i][j] = 0;
        }
        else{
            if(wild[i] == pattern[j]){
                return dp[i][j] = solve(i+1,j+1,n,m,dp,wild,pattern);
            }
            else return dp[i][j] = 0;
        }
    }
    bool match(string wild, string pattern)
    {
        // code here
        int n = wild.size(), m = pattern.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return solve(0,0,n,m,dp,wild,pattern);
    }
};