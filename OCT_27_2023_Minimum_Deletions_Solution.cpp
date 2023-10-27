#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int solve(string &s, int left, int right, vector<vector<int>> &dp){
        if(left>right) return 0;
        if(left == right) return 1;
        if(dp[left][right] != 0) return dp[left][right];
        if(s[left] == s[right]) return dp[left][right] = 2 + solve(s,left+1,right-1,dp);
        return dp[left][right] = max(solve(s,left+1,right,dp),solve(s,left,right-1,dp));
    }
    int minimumNumberOfDeletions(string S) { 
        // code here
        int n = S.size();
        vector<vector<int>> dp(n,vector<int>(n,0));
        return n - solve(S,0,n-1,dp);
    } 
};