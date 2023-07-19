#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int longestPalinSubseq(string &s) {
        //code here
        int n = s.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        string rev = s;
        reverse(rev.begin(),rev.end());
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n ; j++){
                if(s[i] == rev[j]){
                    dp[i+1][j+1] = dp[i][j] + 1;
                }
                else{
                    dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[n][n];
    }
};