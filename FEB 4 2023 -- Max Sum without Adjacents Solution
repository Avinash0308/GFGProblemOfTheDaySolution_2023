class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    if(n == 1)return arr[0];
	    if(n == 2)return max(arr[0],arr[1]);
	    vector<int> dp(n);
	    dp[0] = arr[0];
	    dp[1] = arr[1];
	    dp[2] = arr[0] + arr[2];
	    for(int i = 3; i<n ; i++){
	        dp[i] = max(dp[i-2], dp[i-3]) + arr[i];
	    }
	    return max(dp[n-1],dp[n-2]);
	}
};
