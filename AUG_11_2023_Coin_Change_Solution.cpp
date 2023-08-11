#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long long int count(int coins[], int n, int sum) {

        // code here.
        vector<long long int> dp(sum+1);
        sort(coins, coins+n);
        dp[0] = 1;
        for(int i = n-1; i>=0; i--){
            long long int j = coins[i];
            while(j <= sum){
                dp[j] += dp[j-coins[i]];
                j++;
            }
        }
        return dp[sum];
    }
};