#include<bits/stdc++.h>
using namespace std;
class Solution{
    int mod = 1e9 + 7;
	public:
	int solve(int ind, int req_sum, int arr[], vector<vector<int>> &dp, int n){
	    if(req_sum == 0) return 1;
	    if(ind == n || req_sum < arr[ind]) return 0;
	    if(dp[ind][req_sum] != -1) return dp[ind][req_sum];
	    return dp[ind][req_sum] = (solve(ind+1,req_sum, arr, dp, n) + solve(ind+1,req_sum - arr[ind], arr, dp, n))%mod;
	}
	int perfectSum(int arr[], int n, int sum)
	{
	    sort(arr,arr+n);
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        return solve(0,sum,arr,dp,n);
	}
	  
};