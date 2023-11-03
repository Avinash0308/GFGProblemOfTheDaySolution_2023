#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
	// Function to check if the
	// Pythagorean triplet exists or not
	bool checkTriplet(int arr[], int n) {
	    // code here
	    unordered_map<int,int> m;
	    for(int i = 0; i<n; i++){
	        int val = arr[i]*arr[i];
	        m[val]++;
	    }
	    for(int i = 0; i<n; i++){
	        for(int j = i+1; j<n; j++){
	            int cur = arr[i]*arr[i] + arr[j]*arr[j];
	            if(m.count(cur) != 0) return true;
	        }
	    }
	    return false;
	    
	}
};