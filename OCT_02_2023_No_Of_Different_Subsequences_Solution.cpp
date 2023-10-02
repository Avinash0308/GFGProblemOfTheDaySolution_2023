#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    long long int mod = 1e9+7;
	int distinctSubsequences(string s)
	{
	    // Your code goes here
	    vector<long long int> count(26);
	    int n = s.size();
	    long long int cur = 1;
	    for(int i = n-1; i>=0; i--){
	        long long int val = ((cur*2)%mod - count[s[i]-'a'] + mod)%mod;
	        count[s[i]-'a'] = cur;
	        cur = val;
	    }
	    return cur;
	}
};