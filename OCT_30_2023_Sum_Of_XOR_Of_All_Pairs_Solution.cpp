#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    // Returns sum of bitwise OR
    // of all pairs
    long long int sumXOR(int arr[], int n)
    {
    	long long int ans = 0;
    	for(int i = 31; i>=0; i--){
    	    long long int zero = 0, one = 0, count = 0;
    	    for(int j = 0; j<n; j++){
    	        if((1<<i) & arr[j]){
    	            one++;
    	            count += zero;
    	        }
    	        else{
    	            zero++;
    	            count += one;
    	        }
    	    }
    	    ans += (1<<i)*count;
    	}
    	return ans;
    }
};