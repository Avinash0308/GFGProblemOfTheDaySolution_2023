#include<bits/stdc++.h>
using namespace std;
class Solution{
		

	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> dp(n);
	    int ans = 0;
	    for(int i = n-1; i>=0; i--){
	        int maxy = 0;
	        for(int j = i+1; j<n; j++){
	            if(arr[j] > arr[i]) maxy = max(maxy,dp[j]);
	        }
	        dp[i] = maxy + arr[i];
	        ans = max(ans,dp[i]);
	    }
	    return ans;
	}  
};