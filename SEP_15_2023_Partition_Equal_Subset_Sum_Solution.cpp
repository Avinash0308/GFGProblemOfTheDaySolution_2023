#include<bits/stdc++.h>
using namespace std;
class Solution{
    int mod = 1e9 + 7;
public:
    int equalPartition(int n, int arr[])
    {
        int sum = accumulate(arr,arr+n,0);
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        return solve(0,sum,arr,dp,n,0);
    }
	int solve(int ind, int req_sum, int arr[], vector<vector<int>> &dp, int n, int sum){
	    if(req_sum == sum) return 1;
	    if(ind == n || req_sum < sum) return 0;
	    if(dp[ind][req_sum] != -1) return dp[ind][req_sum];
	    return dp[ind][req_sum] = solve(ind+1,req_sum-arr[ind], arr, dp, n, sum + arr[ind]) || solve(ind+1,req_sum, arr, dp, n, sum);
	}
};